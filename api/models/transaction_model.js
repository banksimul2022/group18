const db = require("../config/db");
//const db = require('../database');
//const bcrypt = require('bcryptjs');
//const saltRounds=10;

const transaction={
  get: function(callback) {
    return db.query('select * from transactions', callback);
  },
  getById: function(transaction, callback) {
    return db.query('select * from transactions where account_numberID=?', [transaction], callback);
  },
  add: function(transaction, callback) {
    db.query('insert into transactions (account_numberID, card_numberID, transactions_datetime, event, amount) values(?,?,now(),"deposit",?)', [transaction.account_numberID, transaction.card_numberID, transaction.customerID], callback);
    return db.query('update account set account_balance=amount+account_balance where account_numberID=account_numberID');
  },
  delete: function(transaction, callback) {
    return db.query('update transactions set amount=?, event=withrawal, account_numberID=?, card_numberID=?', [transaction.amount, transaction.account_numberID, transaction.card_numberID], callback);
  },
  update: function(transaction, callback) {
    return db.query('update transactions set amount, customerID=? where account_numberID=?', [, transaction.customerID], callback);
  }
};
          
module.exports = transaction;