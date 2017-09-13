// Funções para lista duplamente encadeada
#include <stdio.h>
#include <stdlib.h>

// estrutura da lista
struct lista2 {
    struct lista2 * ant;
    struct lista2 * prox;
    int info;
};

typedef struct lista2 Lista2;

// inicialização da lista com NULL
Lista2 * iniciar(void) {
    return NULL;
}

// inserção na lista dupla
Lista2 * inserir(Lista2 * L, int n) {
    Lista2 * novo;
    novo = (Lista2*)malloc(sizeof(Lista2));
    novo->info = n;
    novo->ant = NULL;
    novo->prox = L;
    if(L != NULL)
        L->ant = novo;

    return novo;
}

// inserção no final
Lista2 * inserirFim(Lista2 * L, int n) {
    Lista2 * novo, * P = L;
    novo = (Lista2*)malloc(sizeof(Lista2));
    novo->info = n;
    novo->prox = NULL;
    while(P->prox != NULL)
        P = P->prox;
    P->prox = novo;
    novo->ant = P;

    return L;
}

// inserção ordenada
Lista2 * inserirOrdem(Lista2 * L, int n) {
    Lista2 * novo;
    novo = (Lista2*)malloc(sizeof(Lista2));
    novo->info = n;

    // Em caso da lista estar vazia
    if(L == NULL) {
        novo->ant = novo->prox = NULL;
        return novo;
    }

    Lista2 * p = L;     // Ponteiro auxiliar que percorre a lista

    while(p != NULL) {
        if(n >= p->info && p->prox->info > n) {
            novo->ant = p;
            novo->prox = p->prox;

            p->prox->ant = novo;
            p->prox = novo;

            return L;
        } else if(n <= p->info) {
            novo->ant = p->ant;
            novo->prox = p;
            p->ant = novo;

            return novo;
        }


        p = p->prox;
    }
}

// impressão da lista
void imprimir(Lista2 * L) {
    Lista2 * P;
    for(P =L; P != NULL; P = P->prox) 
        printf("%d -> ", P->info);
    printf("NULL\n");
}