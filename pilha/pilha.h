#include "pilha.c"
// cabeçalhos das funções de pilha
// ### implementação com vetor ########

// definição da estrutura
typedef struct pilha Pilha;

// inicialização da pilha
Pilha * pilhaCria(void);

// empilhar na pilha
void push(Pilha * P, int v);

// desempilhar na pilha
int pop(Pilha * P);

// verifica se a pilha é vazia
int pilhaVazia(Pilha * P);

// função para liberar a pilha
void liberaPilha(Pilha * P);

// função de imprimir
void imprimir(Pilha * P);