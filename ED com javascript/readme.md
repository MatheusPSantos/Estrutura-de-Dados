

## Filas

Uma fila é uma coleção de items ordenados baesado em FIFO (First In First Out). A adição do novo elemento é feita na cauda, tail, e a remoção é feita na frente, head.

## Deque (Fila duplamente encadeada)

A estrutura de dados de deque, também conhecida como fila de duas pontas (double-ended queue), é uma fila especial que nos permite inserir e remover elementos do final ou da frente da fila.
Em ciência da computação, uma aplicação comum de um deque é na armazenagem de uma lista de operações para desfazer ações (undo). O Deque implementa tanto os princípios de FIFO como de LIFO.

## Listas Ligadas
Nas listas ligadas os elementos não são posicionados de forma contígua na memória.Cada elemento é constituído de um nó que contém o elemento propriamente dito, além de uma referência (ponteiro) que aponta para o próximo elemento.
Um vantagem é que não é preciso deslocar os elementos quando houver uma alteração na lista.

<img src="./assets/linked-list.png"/>

> Lista encadeada

## Listas duplamente ligadas

Nas listas duplamente ligadas temos a ligação de cada nó com o seu antecessor e seu nó sucessor.

<img src="./assets/doubly-linked-list.png"/>

> Lista duplamente encadeada

## Listas ligadas circulares

Elas podem ter apenas uma direção de referência ou uma referência dupla. A única diferença entre elas e a lista ligada é a presença de um ponteiro para o próximo item do último elemento faz referência ao head da lista.

<img src="./assets/circular-list.png"/>

> List circular

<img src="./assets/doubly-circular-list.png"/>

> List circular dupla

## Listas ligadas ordenadas

É uma lista que mantém todos os seus elementos ordenados, para manter todos eles ordenados, em vez de aplicar um algoritmo de inserção, fazemos a inserção do elemento na posiçao correta.










<i>Anotações e Imagens retiradas do Ebook <b>Estruturas de Dados e Algoritmos com Javascript - Loiane Groner</b></i>.