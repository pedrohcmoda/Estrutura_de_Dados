#include <stdlib.h>
#include <stdio.h>

struct lista{
	int info;
	struct lista *prox;
};
typedef struct lista Lista;

Lista* inserir(Lista *L, int num){
	Lista *novo;
	novo = (Lista*) malloc(sizeof(Lista));
	novo->info = num;
	novo->prox = L;
    L=novo;
	return(L);		
}

Lista* inserir(Lista *L, int num) {
    Lista *novo;
    novo = (Lista*) malloc(sizeof(Lista));
    novo->info = num;
    novo->prox = NULL;

    if (L == NULL) {
        L = novo;
    } else {
        Lista *p = L;
        while (p->prox != NULL) {
            p = p->prox;
        }
        p->prox = novo;
    }
    
    return L;
}

void showLista(Lista **L){
    Lista *p=*L;
    while (p!=NULL){
        printf("%d\n",p->info);
        p = p->prox;
    }
}



Lista* inicializa(){
    return NULL;
}

Lista* concatena (Lista *L1, Lista *L2){
    Lista *concatenada = L1;
    Lista *p = L1;
    Lista *ant = NULL;

    while (p != NULL) {
        concatenada = p;
        p = p->prox;
    }
    concatenada->prox = L2;
    return L1;
}
