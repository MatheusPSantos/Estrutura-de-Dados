/**
2) Considere  a  implementação  de  filas de  números  inteiros usando arranjos “circulares”. 
Escreva uma função FuraFila(Fila* f, int x) que insere um item na primeira posição da fila. 
O detalhe é que seu procedimento não pode movimentar os outros itens da fila no caso do uso 
de vetores. Criar a função para as situações de filas com vetores e listas encadeadas.
**/
#include "exercicio_02.c"
int main() {
    Fila* f;
    f = criaFila();
    
    insereFila(f, 1);
    insereFila(f, 2);
    insereFila(f, 3);
    insereFila(f, 4);


    imprimir(f);

    furaFila(f, 5);

    imprimir(f);
    return 0;
}