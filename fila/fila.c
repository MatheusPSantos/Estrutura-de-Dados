// Estrutura e funções de FILA
#include <stdio.h>
#include <stdlib.h>

// criação de um tipo de dado
struct lista {
    int info;
    struct lista * prox;
};
typedef struct lista ListaSimples;

struct fila {
    ListaSimples *ini;
    ListaSimples *fim;
};
typedef struct fila FilaSimples;

// criação da Fila - toda fila deve inicializar vazia
FilaSimples* criaFila(void) {
    FilaSimples* f = (FilaSimples*)malloc(sizeof(FilaSimples));
    f->ini = NULL;
    f->fim = NULL;
    return f;
}

// inserindo elementos na fila
void insereFila(FilaSimples* f, int valor) {
    ListaSimples* novo = (ListaSimples*)malloc(sizeof(ListaSimples));
    novo->info = valor;
    novo->prox = NULL;

    if(f->fim != NULL)
        f->fim->prox = novo;
    else
        f->ini = novo;
    f->fim = novo;
}

// verifincando se a Fila está vazia
int filaVazia(FilaSimples* f) {
    return (f->ini == NULL);
}

// imprimindo a Fila
void imprimir(FilaSimples* f) {
    ListaSimples * aux;
    if(f->ini == NULL)
        printf("Fila vazia.\n");
    else{
        for(aux = f->ini; aux != NULL; aux = aux->prox)
            printf("%d -> ", aux->info);
    }
    printf(" ...: fim\n");
}

