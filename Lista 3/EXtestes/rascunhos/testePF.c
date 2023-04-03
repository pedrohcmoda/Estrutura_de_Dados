#include<stdio.h>
#include<stdlib.h>

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
	return(novo);		
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
		L2 = p;
		free(p);
		p = p->prox;
	}
	
	if (p==NULL){
		printf("N�o encontrou o elemento");
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

int main(){
	
	Lista *L1, *L2;
	
	L1 = inicializa();
	L1 = inserirComeco(L1,2);
	L1 = inserirComeco(L1,1);
	L1 = inserirComeco(L1,5);
	
	L1 = retira(L1,2);
	
	L2 = inicializa();
	L2 = inserirComeco(L2,8);
	
	L1 = libera(L1);
	
	imprimir(L1);

	
	
}