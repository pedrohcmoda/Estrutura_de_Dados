#include <stdlib.h>
#include <stdio.h>

struct lista{
	int info;
	struct lista *prox;
};
typedef struct lista Lista;

/*
Lista* inserir(Lista *L, int num){
	Lista *novo;
	novo = (Lista*) malloc(sizeof(Lista));
	novo->info = num;
	novo->prox = L;
	return(novo);		
}
*/
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


/*void showLista(Lista *L) {
    if (L != NULL) {
        showLista(L->prox);
        printf("%d ", L->info);
    }
}*/


Lista* inicializa(){
    return NULL;
}

Lista *separa (Lista *L1, int num){
    Lista *L2 = NULL;
    Lista *p = L1;
    Lista *ant = NULL;

    while (p != NULL && p->info != num) {
        ant = p;
        p = p->prox;
    }

    if (p == NULL) {
        printf("O elemento %d nao foi encontrado na lista.\n", num);
        return NULL;
    }

    L2 = p->prox;
    p->prox = NULL;

    if (ant == NULL) {
        L1 = NULL;
    } else {
        ant=ant->prox;
        ant->prox = NULL;
    }

    return L2;
}
