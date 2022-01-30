const Set = require('./set');

const set = new Set();

set.add("First");
console.log(set.values());
console.log(set.has(1));
console.log(set.has('First'));
console.log(set.size());

set.add(2);
console.log(set.values());
console.log(set.has(2));
console.log(set.has(1));
console.log(set.size());

set.delete("First");
console.log(set.values());

set.clear();
console.log(set.values());


const setA = new Set();
setA.add(1);
setA.add(2);
setA.add(3);

const setB = new Set();
setB.add(3);
setB.add(4);
setB.add(5);
setB.add(6);

const unionAB = setA.union(setB);
console.log(unionAB.values());

const intersectionAB = setA.intersection(setB);
console.log(intersectionAB.values())

const differenceAB = setA.difference(setB);
console.log(differenceAB.values());

