// Principal
#include <stdio.h>
#include <stdlib.h>
#include "listaDupla.h"

int main() {
    Lista2 * lista;     // declarando um ponteiro do tipo lista2
    lista = iniciar();  // inicia a lista dupla com NULL

    lista = inserir(lista, 1);    // insere ordenadamente o valor na lista dupla
    lista = inserir(lista, 2);
    lista = inserir(lista, 3);

    imprimir(lista);    // imprime a lista com todos os valores inseridos

    lista = remover(lista, 2);
    imprimir(lista);
    return 0;

}
