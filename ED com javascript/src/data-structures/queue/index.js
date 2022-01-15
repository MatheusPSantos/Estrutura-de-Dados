const Queue = require("./queue");

const queue = new Queue();

console.log(queue.isEmpty());

queue.enqueue("John");
queue.enqueue("Jack");
console.log(queue.toString());
queue.enqueue("Camila");
console.log(queue.toString());
console.log(queue.size());
console.log(queue.isEmpty());
queue.dequeue();
queue.dequeue();
console.log(queue.toString());

console.log("=========== HOT POTATO GAME ===========");
const { hotPotato } = require('./hotPotato');

const names = ['John', 'Jack', 'Camila', 'Ingrid', 'Carl'];
const result = hotPotato(names, 7);
result.eliminated.forEach(name => {
    console.log(`${name} was eliminated from hot potato game.`);
});
console.log(`The winner is: ${result.winner}`);