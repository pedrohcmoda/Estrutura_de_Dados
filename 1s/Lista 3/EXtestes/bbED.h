#include <stdlib.h>
#include <stdio.h>

typedef struct lista{
	int info;
	struct lista *prox;
}Lista;

Lista* inserir(Lista *L, int num);
void showLista(Lista **L);
Lista* inicializa();
Lista *separa (Lista *L1, int num);