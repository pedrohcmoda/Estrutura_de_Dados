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
	return(novo);		
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

    if (ant != NULL) {
        ant->prox = NULL;
        L2 = p;
    } else {
        L1 = NULL;
        L2 = p;
    }

    return L2;
}





















































/
/*Lista* separa(Lista* l, int n)
{
    Lista* p = l;
    while(p->numero != n){
        p = p->prox;
    }
    p = p->prox;
    
    Lista* l2 = (Lista*)malloc(sizeof(Lista));
    l2->numero = p->numero;
    l2->prox = p->prox;
    Lista* t = l;
    while (p != NULL) {
        Lista* t = p->prox; 
        free(p);
        p = t;
    }
    return l2;
}*/
