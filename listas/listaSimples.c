// funções para a lista Simplesmente encadeada

#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura
struct lista {
	int info;
	struct lista * prox;
};

typedef struct lista Lista;

// inicialização da lista com NULL
Lista * iniciar(void) {
	return NULL;
}

// inserção na lista
Lista * inserir(Lista * L, int n) {
	Lista * novo;
	novo = (Lista *)malloc(sizeof(Lista));
	novo->info = n;
	novo->prox = L;

	return novo;
}


// inserção no final
Lista * inserirFinal(Lista * L, int n) {
	Lista * novo, * P;
	novo = (Lista *) malloc(sizeof(Lista));
	novo->info = n;
	novo->prox = NULL;

	// percorrendo a lista com um ponteiro
	P = L;
	while(P->prox != NULL) {
		P = P->prox;
	}

	P->prox = novo;

	return L;
}

// remoção de um elemento da lista
Lista * remover(Lista * L, int n) {
	Lista * ant, * prox, * P;

	// *P percorre a lista, * ant guarda o nó anterior e * prox guarda a referência do proximo nó
	ant = NULL, prox = NULL;
	P = L;
	// verificando se o elemento a ser removido está no inicio da lista
	if(P->info == n) {
		L = P->prox;
		free(P);
		return L;
	}

	do {
		ant = P;
		P = P->prox;
		prox = P->prox;
	} while(P->info != n && P != NULL);

	free(P);
	ant->prox = prox;

	return L;
}

// função que imprime a lista
void imprimir(Lista * L) {
	Lista * P;
	for(P = L; P != NULL; P = P->prox)
		printf("%d -> ", P->info);
	printf("NULL\n");
}

// função imprimir recursiva
void imprimirRecursive(Lista * l) {
	if(l != NULL) {
		printf("%d ->", l->info);
		imprimir(l->prox);
	}
	printf("NULL\n");
}