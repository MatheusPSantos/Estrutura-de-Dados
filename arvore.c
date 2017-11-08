#include <stdlib.h>
#include <stdio.h>

// Estrutura da �rvore
struct arv {
    int info;
    struct arv* esq;
    struct arv* dir;
};

typedef struct arv Arv;

// retorna a arvore, mas vazia
Arv* arv_criavazia() {
    return NULL;
}

// cria a arvore j� com um n�
Arv* arv_cria(int v, Arv* sae, Arv* sad) {
    Arv* n = (Arv*)malloc(sizeof(Arv));
    n->info = v;
    n->esq = sae;
    n->dir = sad;
    return n;
}

// liberar mem�ria alocada pela estrutura da �rvore
Arv* arv_libera(Arv* a) {
    if(a != NULL) {
        arv_libera(a->esq);
        arv_libera(a->dir);
        free(a);
    }
    return NULL;
}

// verifica a ocorr�ncia de um INFO em um dos n�s
int arv_pertence(Arv* a, int v) {
    if(a == NULL)
        return 0;
    else
        return (a->info == v || arv_pertence(a->esq, v) || arv_pertence(a->dir, v));
}
// fun��o de impress�o da arvore
void arv_imprime(Arv* a) {
    if(a != NULL){
        printf("%d ", a->info);
        arv_imprime(a->esq);
        arv_imprime(a->dir);
    }
}
