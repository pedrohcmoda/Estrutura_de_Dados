#ifndef BBD_H
#define BBD_H

struct lista{
	int info;
	struct lista *prox;
};
typedef struct lista Lista;

Lista* inserir(Lista *L, int num);
Lista* inicializa();
Lista *retira_prefixo (Lista *L1, int num);

#endif