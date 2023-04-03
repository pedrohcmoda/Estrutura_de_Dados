#include <stdlib.h>
#include <stdio.h>

struct lista{
	int info;
	struct lista *prox;
};
typedef struct lista Lista;



Lista* inicializa(){
    return NULL;
}

Lista* inserir(Lista *L, int num){
	Lista *novo;
	novo = (Lista*) malloc(sizeof(Lista));
	novo->info = num;
	novo->prox = L;
    L=novo;
	return(L);		
}
Lista* constroi(int n, int *v){
    Lista* L=NULL;
    L=inicializa();
    for(int i=0;i<n;i++){
        L=inserir(L, v[i]);
    }
    return L;
}



/*Lista* inserir(Lista *L, int num) {
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
*/

/*
void showLista(Lista **L){
    Lista *p=*L;
    while (p!=NULL){
        printf("%d\n",p->info);
        p = p->prox;
    }
}
*/
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
