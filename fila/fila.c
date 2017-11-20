// Estrutura e funções de FILA
#include <stdio.h>
#include <stdlib.h>

// criação de um tipo de dado
struct lista {
    int info;
    struct lista * prox;
};
typedef lista ListaSimples;

struct fila {
    ListaSimples *ini;
    ListaSimples *fim;
};
typedef fila FilaSimples;

// criação da Fila - toda fila deve inicializar vazia
FilaSimples* criaFila(void) {
    FilaSimples* f = (FilaSimples*)malloc(sizeof(FilaSimples));
    f->ini = NULL;
    f->fim = NULL;
    return f;
}


