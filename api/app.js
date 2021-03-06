var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');

var indexRouter = require('./routes/index');
var usersRouter = require('./routes/users');
var loginRouter = require('./routes/login');
var cardRouter = require('./routes/card');
var accountRouter = require('./routes/account');
var cusAccRouter = require('./routes/cusAcc');
var transactionRouter = require('./routes/transaction');

var app = express();

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/', indexRouter);
app.use('/index', indexRouter);
app.use('/users', usersRouter);
app.use('/login', loginRouter);
app.use('/card', cardRouter);
app.use('/account', accountRouter);
app.use('/cusAcc', cusAccRouter);
app.use('/transaction', transactionRouter);

module.exports = app;
