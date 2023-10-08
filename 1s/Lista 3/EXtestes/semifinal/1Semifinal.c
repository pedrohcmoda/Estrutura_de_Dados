#include <stdio.h>
#include <stdlib.h>
#include "bbED.h"

typedef struct lista{
    int info;
    struct lista *prox;
}Lista;

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