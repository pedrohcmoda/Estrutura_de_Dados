#include <stdlib.h>
#include <stdio.h>

struct lista{
	int info;
	struct lista *prox;
};
typedef struct lista Lista;

/*
Lista* inserir(Lista *L, int n){
	Lista *novo;
	novo = (Lista*) malloc(sizeof(Lista));
	novo->info = n;
	novo->prox = L;
	return(novo);		
}
*/
Lista* inserir(Lista *L, int n) {
    Lista *novo;
    novo = (Lista*) malloc(sizeof(Lista));
    novo->info = n;
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
void showLista(Lista *L) {
    if (L == NULL) {
        printf("Lista vazia\n");
        return;
    }
    Lista *p = L;
    while (p != NULL) {
        printf("%d\n", p->info);
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

Lista *retira_prefixo (Lista *L1, int n){
    Lista *L2 = NULL;
    Lista *p = L1;
    Lista *ant = NULL;
    int cont=0;

    while (p != NULL && cont<n) {
        ant = p->prox;
        p =NULL;
        p=ant;
        cont++;
    }
    L2=ant;
    return L2;
}
