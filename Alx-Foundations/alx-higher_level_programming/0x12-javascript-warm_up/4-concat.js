#!/usr/bin/node
const myVar = undefined;
if (process.argv.length === 2) {
  console.log(myVar, 'is', myVar);
} else if (process.argv.length === 3) {
  console.log(process.argv[2], 'is', myVar);
} else {
  console.log(process.argv[2], 'is', process.argv[3]);
}
