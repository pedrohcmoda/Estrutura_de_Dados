#include <stdio.h>
#include <stdlib.h>
#include "bbd.h"

int main(){
    Lista* L1,* L2;
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



/*
faça em .c todas as funçoes
gcc -c (NOME_definido).c -o (NOME_definido).o
faça em .h todos os prototipos
ar rcs lib(NOME_desejado).a (NOME_definido).o
compile a main com: gcc (NOME_da_MAIN).c -L. -l(NOME_da_BIBLIOTECA_criada) -o (NOME_do_ARQUIVO_final)
*/