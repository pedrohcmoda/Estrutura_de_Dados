#include <stdio.h>
#include <stdlib.h>
#include "bbd3.h"

int main(){
    Lista* L1;
    int *vetor;
    int tamanho;
    printf("Qual o tamanho do vetor ?");
    scanf("%d", &tamanho);
    vetor=malloc(tamanho*sizeof(int));
    for(int i =0;i<tamanho;i++){
        printf("Digite o numero da posição [%d]:\n", i);
        scanf("%d", &vetor[i]);
    }
    L1=inicializa();
    L1=constroi(tamanho, vetor);
    printf("Lista encadeada criada: \n");
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