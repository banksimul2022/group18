const db = require("../config/db");
//const db = require('../database');
//const bcrypt = require('bcryptjs');
//const saltRounds=10;

const cusAcc={
  get: function(callback) {
    return db.query('select * from customer_account', callback);
  },
  getById: function(cusAcc, callback) {
    return db.query('select * from customer_account where customerID=?', [cusAcc], callback);
  },
  add: function(cusAcc, callback) {
      return db.query('insert into customer_account (account_numberID, customerID) values(?,?)', [cusAcc.account_numberID, cusAcc.customerID], callback);
  },
  delete: function(cusAcc, callback) {
    return db.query('delete from customer_account where customerID=?', [cusAcc.customerID], callback);
  },
  update: function(cusAcc, callback) {
      return db.query('update customer_account set account_numberID=?, customerID=? where customerID=?', [cusAcc.account_numberID, cusAcc.customerID, cusAcc.customerID2], callback);
    }
  };
          
module.exports = cusAcc;