const BinarySearchTree = require("./binary-search-tree");

const tree = new BinarySearchTree();
tree.insert(11);
tree.insert(7);
tree.insert(15);
tree.insert(5);
tree.insert(3);
tree.insert(9);
tree.insert(8);
tree.insert(10);
tree.insert(13);
tree.insert(12);
tree.insert(14);
tree.insert(20);
tree.insert(18);
tree.insert(25);

const printNode = (value) => console.log(value);
tree.inOrderTraverse(printNode);

console.log("Min node >> ", tree.min());
console.log("Max node >> ", tree.max());

console.log(" 1 ? >> ", tree.search(1));
console.log(" 8 ? >> ", tree.search(8))
