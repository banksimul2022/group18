const express = require('express');
const router = express.Router();
const account = require('../models/account_model');

router.get('/:account?',
 function(request, response) {
  if (request.params.account) {
    console.log('Käyttäjä antoi'+request)
    account.getById(request.params.account, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  } else {
    account.get(function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  }
});

router.post('/', 
function(request, response) {
  account.add(request.body, function(err, count) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body); 
    }
  });
});

router.delete('/', 
function(request, response) {
  account.delete(request.body, function(err, count) {
    if (err) {
      response.json(err);
    } else {
      response.json(count);
    }
  });
});

router.put('/', 
function(request, response) {
  account.update(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body);
    }
  });
});

module.exports = router;