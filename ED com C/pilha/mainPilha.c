// função main
#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    Pilha * pilha;
    pilha = pilhaCria(); // inicializa a pilha

    push(pilha, 2);
    push(pilha, 3);
    push(pilha, 4);

    imprimir(pilha);
    pop(pilha);
    imprimir(pilha);
    return 0;
}