#include <stdio.h>
#include <stdlib.h>

/** Fila com Vetor */
// tamanho do vetor
#define N 2

struct vet_fila {
    int ini;
    int fim;
    int vet[N];
};

typedef struct vet_fila V_FILA;

// criação da Fila alocando dinamicamente e vazia, com ini = fim
V_FILA* cria_VFILA(void) {
    V_FILA * vf = (V_FILA*)malloc(sizeof(V_FILA));
    vf->ini = 0;
    vf->fim = vf->ini;
    return vf;
}

// função de inserção numa fila com vetor
void insere_vfila(V_FILA* vf, int valor) {
    if(vf->fim == N) {
        printf("FILA CHEIA.\nSAINDO ...\n");
        exit(1);
    }
    vf->vet[vf->fim] = valor;
    vf->fim++;
}

// função que conta elementos na fila
int cont_elem_VFila(V_FILA* vf){
    if(vf->fim == vf->ini)
        return 0;
    else if(vf->fim == N)
        return N;
    else{
        return vf->fim;
    }
}

/** Fila com LISTA */
// estrutura do nó
struct no {
    int info;
    struct no * prox;
};

typedef struct no No;

// estrutura da fila
struct list_fila {
    No * ini;
    No * fim;
};

typedef struct list_fila L_FILA;

// criando a fila
L_FILA* cria_LFILA(void) {
    L_FILA* lf = (L_FILA*)malloc(sizeof(L_FILA));
    lf->ini = NULL;
    lf->fim = NULL;
    return  lf;
}

// inserindo na fila com lista
void insere_lfila(No* no, int valor){}
