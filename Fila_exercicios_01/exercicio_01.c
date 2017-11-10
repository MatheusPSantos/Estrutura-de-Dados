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

// fun��o de inser��o numa fila com vetor
void insere_vfila(V_FILA* vf, int valor) {
    if(vf->fim == N) {
        printf("FILA CHEIA.\nSAINDO ...\n");
        exit(1);
    }
    vf->vet[vf->fim] = valor;
    vf->fim++;
}

// fun��o que conta elementos na fila
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
// estrutura do n�
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
/* necessário implementar a função de inserção
   no nó e depois usá-la na função de inserção na fila
*/
// insere somente no fim
No* No_insere(No* fim, int v) {
    No* novo = (No*)malloc(sizeof(No));
    novo->info = v;
    novo->prox = NULL;
    // verificar se a lista não está vazia
    if(fim != NULL)
        fim->prox = novo;
    return novo;
}

// função retira do início
No* No_retira(No* ini) {
    No* aux = ini->prox;
    free(ini);
    return aux;
}
// inserção na fila usando a implementação de inserção
// usando lista
void insere_lfila(L_FILA* lf, int valor){
    lf->fim = No_insere(lf->fim, valor);
    // testa se a fila estava vazia
    if(lf->ini == NULL)
        lf->ini = lf->fim;
}

int remove_lfila(Fila* lf) {
    int v;
    if(lf == NULL){
        printf("Fila vazia\n");
        exit(1);
    }
    v = lf->ini->info;
    lf->ini = No_retira(lf->ini);
    // testa se a fila está vazia
    if(lf->ini == NULL)
        lf->fim = NULL;
    return v;
}