#include <stdio.h>
#include <stdlib.h>

// estrutura da lista que será usada para manipulação na pilha
struct lista {
    int info;
    struct lista * prox;
};

typedef struct lista Lista;

// estrutura de um nó da pilha
struct pilha {
    struct lista * prim;
};

typedef struct pilha Pilha;

// funções de definição da pilha
Pilha * pilhaCria() {
    Pilha * N;
    N = (Pilha *) malloc(sizeof(Pilha));
    N->prim = NULL;

    return N;
}

// funções de manipulação
// função de empilhar
void push(Pilha * p, int v) {
    Lista * n = (Lista *)malloc(sizeof(Lista));
    if(n != NULL) {    
        n->info = v;
        n->prox = p->prim;
        p->prim = n;
    } else {
        printf("Sem espaço...\n");
        exit(-1);
    }
}

// função de remover
int pop(Pilha * p) {
    Lista * aux; int v;
    if(p->prim == NULL)
        exit(1);
    aux = p->prim;
    v = aux->info;
    p->prim = aux->prox;
    free(aux);
    return v;
}

// função de impressão
void print(Pilha * p) {
    Lista * aux;
    for(aux = p->prim; aux->prox != NULL; aux = aux->prox)
        printf("%d ", aux->info);
    printf("Null\n");
}

// função de comparação
int pilhacomp(Pilha * p1, Pilha * p2) {
    Lista * aux1 = p1->prim;
    Lista * aux2 = p2->prim;
    int flag = 0;
    while(aux1 != NULL && aux2 != NULL) {
        if(aux1->info != aux2->info) {
            flag = 1;
            return flag;
        }
        aux1 = aux1->prox;
        aux2 = aux2->prox;
    }
    if(aux1 == aux2)
        return flag;
    else{
        flag = 1;
        return ; 
    }      
}