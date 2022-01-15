const Deque = require("./deque");
const palindromeChecker = require("./palindromo");

const deque = new Deque();

console.log(deque.isEmpty());
deque.addBack('John');
deque.addBack('Jack');
console.log(deque.toString());
deque.addBack('Camila');
console.log(deque.toString());
console.log(deque.size());
console.log(deque.isEmpty());
deque.removeFront();
console.log(deque.toString());
deque.removeBack();
console.log(deque.toString());
deque.addFront('John');
console.log(deque.toString());

console.log("======= PALINDROME CHECKER ================");
console.log('a', palindromeChecker('a'));
console.log('aa', palindromeChecker('aa'));
console.log('kayak', palindromeChecker('kayak'));
console.log('level', palindromeChecker('level'));
console.log('Was it a car or a cat i saw', palindromeChecker('Was it a car or a cat i saw'));
console.log('Step on no pets', palindromeChecker('Step on no pets'));