const db = require("../config/db");
//const db = require('../database');
const bcrypt = require('bcryptjs');
//const { hash } = require("bcrypt");

const saltRounds=10;
const card={
  get: function(callback) {
    return db.query('select * from cardnumber', callback);
  },
  getById: function(card, callback) {
    return db.query('select * from cardnumber where card_numberID=?', [card], callback);
  },
  add: function(card, callback) {
    bcrypt.hash(card.card_PIN, saltRounds, function(err, hash) {
      return db.query('insert into cardnumber (card_PIN, account_numberID, customerID) values(?,?,?)',
      [hash, card.account_numberID ,card.customerID], callback);
    });
  },
  delete: function(card, callback) {
    return db.query('delete from cardnumber where card_numberID=? and customerID=?', [card.card_numberID, card.customerID], callback);
  },
  update: function(card, callback) {
    bcrypt.hash(card.card_PIN, saltRounds, function(err, hash) {
      return db.query('update cardnumber set card_PIN=?, customerID=?, account_numberID=? where card_numberID=?',
      [hash, card.customerID, card.account_numberID, card.card_numberID], callback);
    });
  }

}
          
module.exports = card;