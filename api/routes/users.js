const express = require('express');
const router = express.Router();
const user = require('../models/user_model');
//const basicAuth = require('express-basic-auth');

router.get('/:user?',
 function(request, response) {
  if (request.params.user) {
    console.log('Käyttäjä antoi'+request)
    user.getById(request.params.user, function(err, dbResult) {
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
  user.add(request.body, function(err, count) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body); 
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