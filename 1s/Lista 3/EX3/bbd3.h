#ifndef BBD3_H
#define BBD3_H

struct lista{
	int info;
	struct lista *prox;
};
typedef struct lista Lista;

Lista* inserir(Lista *L, int num);
void showLista(Lista *L);
Lista* inicializa();
Lista* constroi(int n, int *v);

#endif