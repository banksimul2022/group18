const db = require("../config/db");
//const db = require('../database');
//const bcrypt = require('bcryptjs');
//const saltRounds=10;

const account={
  get: function(callback) {
    return db.query('select * from account', callback);
  },
  getById: function(account, callback) {
    return db.query('select * from account where account_numberID=?', [account], callback);
  },
  add: function(account, callback) {
    return db.query('insert into account (account_balance) values(?)', [account.account_balance], callback);
  },
  delete: function(account, callback) {
    return db.query('delete from account where account_numberID=?', [account.account_numberID], callback);
  },
  update: function(account, callback) {
    return db.query('update account set account_numberID=?, account_balance=? where account_numberID=?', [account.account_numberID, account.account_balance, account.account_numberID], callback);
  }
};
          
module.exports = account;