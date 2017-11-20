// CABE�ALHOS DAS FUN��O DE FILA QUEST�O 1
#include "exercicio_01.c"
// FILA COM VETOR

V_FILA* cria_VFILA(void);
void insere_vfila(V_FILA* vf, int valor);
int cont_elem_VFila(V_FILA* vf);

// FILA COM LISTA

typedef struct list_fila L_FILA;
L_FILA* cria_LFILA(void);
void insere_lfila(L_FILA* lf, int valor);
int remove_lfila(L_FILA* lf);
int cont_elem_LFila(L_FILA* lf);