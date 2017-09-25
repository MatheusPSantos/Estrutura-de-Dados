// Biblioteca das funções de Lista Duplamente Encadeada
#include "listaDupla.c"

// estrutura
typedef struct lista2 Lista2;

// função de inicialização da lista dupla
Lista2 * iniciar(void);

// inserção na lista dupla
Lista2 * inserir(Lista2 * L, int n);

// inserção no final
Lista2 * inserirFim(Lista2 * L, int n);

// inserção ordenada
Lista2 * inserirOrdem(Lista2 * L, int n);

// função de busca
Lista2 * buscar(Lista2 * L, int n);

// função de remoção de um nó
Lista2 * remover(Lista2 * L, int n);

// impressão da lista
void imprimir(Lista2 * L);