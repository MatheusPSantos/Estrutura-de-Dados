const DoublyLinkedList = require('./double-linked-list');

class StackLinkedList {
  constructor() {
    this.items = new DoublyLinkedList();

  }

  push(element) {
    this.items.push(element);
  }

  pop() {
    if (this.isEmpty()) {
      return undefined;
    }

    return this.items.removeAt(this.size() - 1);
  }
}

module.exports = StackLinkedList;