const express = require('express');
const router = express.Router();
const user = require('../models/transaction_model');

router.get('/:transaction?',
 function(request, response) {
  if (request.params.transaction) {
    console.log('Käyttäjä antoi'+request)
    user.getById(request.params.transaction, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  } else {
    user.get(function(err, dbResult) {
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
  user.add(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult); 
    }
  });
});

router.delete('/', 
function(request, response) {
  user.delete(request.body, function(err, count) {
    if (err) {
      response.json(err);
    } else {
      response.json(count);
    }
  });
});

router.put('/', 
function(request, response) {
  user.update(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});

module.exports = router;