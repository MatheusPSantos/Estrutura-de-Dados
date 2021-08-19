#include <stdio.h>
#include <limits.h>
#include "pilhaDinamic.c"

int main() {
    Pilha * p;
    p = pilhaCria();
    int n = 0;
    while(n < 100) {
        push(p , n);
        n++;
    }
    print(p);

    return 0;
}