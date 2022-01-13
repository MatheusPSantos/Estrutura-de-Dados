/**
2) Considere  a  implementação  de  filas de  números  inteiros usando arranjos “circulares”. 
Escreva uma função FuraFila(Fila* f, int x) que insere um item na primeira posição da fila. 
O detalhe é que seu procedimento não pode movimentar os outros itens da fila no caso do uso 
de vetores. Criar a função para as situações de filas com vetores e listas encadeadas.
**/

#include <stdio.h>
#include <stdlib.h>

struct lista {
    int info;
    struct lista *prox;
};
typedef struct lista Lista;

struct fila {
    Lista * ini;
    Lista * fim;
};
typedef struct fila Fila;

Fila* criaFila(void) {
    Fila* f = (Fila*)malloc(sizeof(Fila));
    f->ini = NULL;
    f->fim = NULL;
    return f;
}

void insereFila(Fila* f, int v) {
    Lista * novo = (Lista*)malloc(sizeof(Lista));
    novo->info = v;
    novo->prox = NULL;

    if(f->fim != NULL) {
        f->fim->prox = novo;
        novo->prox = f->ini;
    }
    else
        f->ini = novo;
    f->fim = novo;
}

void imprimir(Fila* f) {
    Lista* aux;
    if(f->ini == NULL)
        printf("Fila vazia...\n");
    else {
        printf("%d ->", f->ini->info);
        for(aux = f->ini->prox; aux != f->ini; aux=aux->prox) {
            printf("%d -> ", aux->info);
        }
    }
    printf("...:fim\n");
}

void furaFila(Fila* f, int x) {
    Lista* aux = (Lista*)malloc(sizeof(Lista));
    aux->info = x;
    aux->prox = NULL;

    if(f->ini == NULL)
        printf("\nfila vazia\n");
    else {
        aux->prox = f->ini;
        f->ini = aux;
        f->fim->prox = aux;
        f->fim = f->ini;
    }
}