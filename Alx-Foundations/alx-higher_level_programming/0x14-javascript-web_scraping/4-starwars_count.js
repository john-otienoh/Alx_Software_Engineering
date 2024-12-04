#!/usr/bin/node
const request = require('request');
const url = process.argv[2]
const charId 'https://swapi-api.alx-tools.com/api/people/18/
const data = JSON.parse(request(url));
const chars = data['characters'];
const count = 0;
for (i in chars) {
  if (i === charId) {
	  count = count + 1;
  }
}
