class Queue {
    constructor() {
        this.count = 0;
        this.lowestCount = 0;
        this.items = {};
    }

    // inserção de novo elemento na fila
    enqueue(element) {
        this.items[this.count] = element;
        this.count++;
    }

    // remoção do elemento da fila
    dequeue() {
        if (this.isEmpty()) return undefined;
        const result = this.items[this.lowestCount];
        delete this.items[this.lowestCount];
        this.lowestCount++;
        return result;
    }

    // retorna o elemento da frente da fila
    peek() {
        if (this.isEmpty()) return undefined;
        return this.items[this.lowestCount];
    }

    isEmpty() {
        return this.size() === 0;
    }

    size() {
        return this.count - this.lowestCount;
    }

    clear() {
        this.items = {};
        this.count = 0;
        this.lowestCount = 0;
    }

    toString() {
        if (this.isEmpty()) return '';
        let objString = `${this.items[this.lowestCount]}`;
        for (let index = this.lowestCount + 1; index < this.count; index++) {
            objString = `${objString},${this.items[index]}`;
        }
        return objString;
    }
}

module.exports = Queue;