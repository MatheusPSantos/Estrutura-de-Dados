#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main() {
	FilaSimples* fila;	// declarando um ponteiro do tipo FilaSimples
	fila = criaFila();
	int c = 0;
	// inserindo elementos na fila
	printf("FILA:...\nInicio:...");

	do {
		insereFila(fila, c);
		c++;
	}while(c < 20);

	imprimir(fila);	// imprimindo os elementos da fila

	return 0;
}
