#include "arvore.c"
typedef struct arv Arv;
Arv* arv_criavazia();
Arv* arv_cria(int v, Arv* sae, Arv* sad);
Arv* arv_libera(Arv* a);
int arv_pertence(Arv* a, int v);
void arv_imprime(Arv* a);
