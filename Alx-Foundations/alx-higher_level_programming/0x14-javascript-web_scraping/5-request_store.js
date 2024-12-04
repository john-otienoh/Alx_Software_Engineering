#!/usr/bin/node
const fs = require('fs');
const request = require('request');
const path = process.argv[3];
const content = request(process.argv[2]).body;
fs.writeFile(path, content, 'utf8', function (e) {
  if (e) {
	console.error(e);
  } 
});
