#include <stdio.h>
#include <stdlib.h>
// biblioteca com as funções de pilha
// #### implementações com vetor ######
// estrutura da pilha

#define N 50    // definir o tamanho do vetor

struct pilha {
    int vet[N];
    int n;  // primeira posição livre na pilha // controla a quantidade de elementes
};
typedef struct pilha Pilha;

// inicialização da pilha
Pilha * pilhaCria(void) {
    Pilha * P;
    P = (Pilha*)malloc(sizeof(Pilha));

    P->n = 0;

    return P;
}

// empilhar na pilha
void push(Pilha * P, int v) {
    if(P->n == N)
        printf("Pilha cheia\n");
    else {
        P->vet[P->n] = v;
        P->n ++;
    }
}

// desempilhar
#define FAIL -100   // define a flag de falha

// verifica se a pilha é vazia
int pilhaVazia(Pilha * P) {
    if(P->n == 0)
        return FAIL;
}
// retorna o valor retirado
int pop(Pilha * P) {
    return pilhaVazia(P); // pilha vazia
        
    P->n --;
    return P->vet[P->n];  // retorna o valor na posição anterior
}

// função para liberar a pilha
void liberaPilha(Pilha * P) {
    free(P);
}

// função de imprimir
void imprimir(Pilha * P) {
    int cont;
    for(cont = 0; cont < P->n; cont++)
        printf("[%d]|", P->vet[cont]);
    printf("Final\n");
}