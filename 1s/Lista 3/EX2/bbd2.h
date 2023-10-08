#ifndef BBD_H
#define BBD_H

struct lista{
	int info;
	struct lista *prox;
};
typedef struct lista Lista;

Lista* inserir(Lista *L, int num);
void showLista(Lista **L);
Lista* inicializa();
Lista* concatena (Lista *L1, Lista *L2);

#endif