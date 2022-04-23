const express = require('express');
const router = express.Router();
const cusAcc = require('../models/cusAcc_model');

router.get('/:cusAcc?',
 function(request, response) {
  if (request.params.cusAcc) {
    console.log('Käyttäjä antoi'+request)
    cusAcc.getById(request.params.cusAcc, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  } else {
    cusAcc.get(function(err, dbResult) {
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
  cusAcc.add(request.body, function(err, count) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body); 
    }
  });
});

router.delete('/', 
function(request, response) {
  cusAcc.delete(request.body, function(err, count) {
    if (err) {
      response.json(err);
    } else {
      response.json(count);
    }
  });
});

router.put('/', 
function(request, response) {
  cusAcc.update(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body);
    }
  });
});

module.exports = router;