// Principal
#include <stdio.h>
#include <stdlib.h>
#include "listaDupla.h"

int main() {
    Lista2 * lista;     // declarando um ponteiro do tipo lista2
    lista = iniciar();  // inicia a lista dupla com NULL

    lista = inserirOrdem(lista, 1);    // insere ordenadamente o valor 10 na lista dupla
    lista = inserirOrdem(lista, 2);
    lista = inserirOrdem(lista, 3);

    imprimir(lista);    // imprime a lista com todos os valores inseridos
    return 0;

}