#!/usr/bin/node
const fs = require('fs');
const path = process.argv[2];
fs.readFile(path, 'utf8', function (e, content) {
  if (e) {
    console.error(e);
  } else {
    console.log(content);
  }
});
