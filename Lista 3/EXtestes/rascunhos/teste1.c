#include<stdio.h>
#include<stdlib.h>

struct lista{
	int info;
	struct lista *prox;
};
typedef struct lista Lista;


Lista* inicializa();
Lista* inserirComeco(Lista *L, int num);
void imprimir(Lista* L);
Lista* retira(Lista* L, int num);
Lista* libera (Lista* L);

int main(){
	
	Lista *L1, *L2;
	return 0;
    
}
Lista* inicializa(){
	return NULL;
}

void imprimir(Lista* L){
	Lista* p=L;
	while (p!=NULL){
		printf("%d\n",p->info);
		p = p->prox;
	}
}

Lista* retira(Lista* L, int num){
	Lista *ant=NULL;
	Lista *p = L;
	
	while(p!=NULL && p->info!=num){
		ant = p;
		p = p->prox;
	}
	
	if (p==NULL){
		printf("Nao encontrou o elemento");
		return L;
	}
	
	if (ant==NULL)
		L = p->prox;
	else{
		ant->prox=p->prox;
	}	
	
	free(p);
    
	return L;
}

Lista* libera (Lista* L)
{
	Lista* p = L;
	while (p != NULL) {
		Lista* t = p->prox; 
		free(p);
		p = t; 
	}
	return NULL;
}
