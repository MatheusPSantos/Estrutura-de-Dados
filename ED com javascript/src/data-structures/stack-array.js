export default class Stack {
    constructor() {
        this.items = [];
    }

    // responsável pela adição de novos elementos na pilha
    push(element) {
        this.items.push(element);
    }

    // remoção de itens da pilha
    pop() {
        return this.items.pop();
    }

    // retorna o valor do elemento que está no topo da pilha
    peek() {
        return this.items[this.items.length - 1];
    }

    // retorna true se a pilha está vazia
    isEmpty() {
        return this.items.length === 0;
    }

    // tamanho da pilha
    size() {
        return this.items.length;
    }

    // limpa os elementos da pilha
    clear() {
        this.items = [];
    }
}

