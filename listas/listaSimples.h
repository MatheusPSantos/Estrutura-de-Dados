// Biblioteca com as funções de Lista Simples
#include "listaSimples.c"

// definição da lista 
typedef struct lista Lista;

// inicialização da lista
Lista * iniciar(void);

// inserção na lista
Lista * inserir(Lista * L, int n);

// inserção no final da lista
Lista * inserirFinal(Lista * L, int n);

// remoção de um elemento da lista
Lista * remover(Lista * L, int n);

// função para impressão da lista
void imprimir(Lista * L);

void imprimirRecursive(Lista * L);