/**
*   1) Criar uma função que retorne a quantidade de elementos de uma fila. Implemente uma função
*   para fila com lista encadeada e uma função para fila com vetor.
*/
#include <stdio.h>
#include "exercicio_01.h"

int main() {
    V_FILA* vfila;
    vfila = cria_VFILA();

    printf("Fila com vetor criada...\n");
    printf("Inserindo elementos...\n");
    insere_vfila(vfila, 4);
    printf("4 inserido ...\n");
    insere_vfila(vfila, 2);
    printf("2 inserido...\n");
    insere_vfila(vfila, 2);
    printf("numero de elementos na fila >>> %d\n", cont_elem_VFila(vfila));

    return 0;
}

