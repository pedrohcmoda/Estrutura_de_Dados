#include <stdio.h>
#include <stdlib.h>


typedef struct lista{
    int info;
    struct lista *prox;
}Lista;

Lista *separa (Lista *l, int n);
Lista *inicializa();
void showLista();
Lista* inserir(Lista *L, int num);

int main(){
    Lista *L1, *L2;
    L1=inicializa();
    L2=inicializa();
    L1 = inserir(L1, 1);
    L1 = inserir(L1, 2);
    L1 = inserir(L1, 3);
    L1 = inserir(L1, 4);
    L1 = inserir(L1, 5);
    printf("Lista antes de ser partida em 2: \n");
    showLista(&L1);
    L2=separa(L1, 3);
    printf("Lista apos ser repartida: \n");
    printf("Parte 1: \n");
    showLista(&L1);
    printf("Parte 2: \n");
    showLista(&L2);
    return 0;
}


Lista* inserir(Lista *L, int num){
	Lista *novo;
	novo = (Lista*) malloc(sizeof(Lista));
	novo->info = num;
	novo->prox = L;
	return(novo);		
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

/*void showLista(Lista* L){
	Lista *p=L;
	while (p!=NULL){
		printf("%d\n",p->info);
		p = p->prox;
	}
}*/
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
