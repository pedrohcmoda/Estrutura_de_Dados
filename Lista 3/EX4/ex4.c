#include <stdio.h>
#include <stdlib.h>
#include "bbd4.h"

int main(){
    Lista* L1;
    int n=0;
    L1=inicializa();
    L1 = inserir(L1, 1);
    L1 = inserir(L1, 2);
    L1 = inserir(L1, 3);
    L1 = inserir(L1, 4);
    L1 = inserir(L1, 5);
    printf("Lista antes de ser partida: \n");
    showLista(L1);
    printf("\nQuantos numeros você deseja retirar ?\n");
    scanf("%d", &n);
    L1=retira_prefixo(L1, n);
    printf("\nLista apos ser partida: \n");
    showLista(L1);
    return 0;
}



/*
faça em .c todas as funçoes
gcc -c (NOME_definido).c -o (NOME_definido).o
faça em .h todos os prototipos
ar rcs lib(NOME_desejado).a (NOME_definido).o
compile a main com: gcc (NOME_da_MAIN).c -L. -l(NOME_da_BIBLIOTECA_criada) -o (NOME_do_ARQUIVO_final)
*/