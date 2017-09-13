// Funções para lista duplamente encadeada

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
    novo->info = N;
    novo->prox = NULL;
    while(P->prox != NULL)
        P = P->prox;
    P->prox = novo;
    novo->ant = P;

}