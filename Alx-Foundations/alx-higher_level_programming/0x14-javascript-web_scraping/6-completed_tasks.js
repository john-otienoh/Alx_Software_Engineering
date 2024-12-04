#!/usr/bin/node
const request = require('request');
const data = JSON.parse(request(process.argv[2]));
const details = {};
for (i in data) {
  
