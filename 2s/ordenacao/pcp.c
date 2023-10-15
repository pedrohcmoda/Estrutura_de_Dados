#include <stdio.h>
#include <stdlib.h>
#include "stdpedro.h"



void escolha (int *vetor, int tamanho){
    int selecionado;
    printf("\nDigite 1 para ordenar com Selection Sort crescente\nDigite 2 para ordenar com Selection Sort decrescente\nDigite 3 para ordenar com Insertion sort crescente\nDigite 4 para ordenar com Insertion sort decrescente\n");
    scanf("%d", &selecionado);
    switch (selecionado)
    {
    case 1:
        printf("\nVetor após ser ordenado com Selection Sort crescente:\n");
        selecaoCrescente(vetor, tamanho);
        for(int i= 0; i<tamanho; i++){
            printf("%d\t", vetor[i]);
        }
        break;
    case 2:
        printf("\nVetor após ser ordenado com Selection Sort decrescente:\n");
        selecaoDecrescente(vetor, tamanho);
        for(int i= 0; i<tamanho; i++){
            printf("%d\t", vetor[i]);
        }
        break;
    case 3:
        printf("\nVetor após ser ordenado Insertion Sort crescente:\n");
        insercaoCrescente(vetor, tamanho);
        for(int i= 0; i<tamanho; i++){
            printf("%d\t", vetor[i]);
        }
        break;
    case 4:
        printf("\nVetor após ser ordenado com Insertion Sort decrescente :\n");
        insercaoDecrescente(vetor, tamanho);
        for(int i= 0; i<tamanho; i++){
            printf("%d\t", vetor[i]);
        }
        break;
    default:
        escolha(vetor,tamanho);
        break;
    }
}


int main(){
    int tamanho = 0;
    int *vetor;
    printf("Digite o numero de posições do vetor: ");
    scanf("%d", &tamanho);
    vetor = malloc(tamanho*sizeof(int));
    for(int i = 0; i < tamanho; i++){
        printf("\nDigite o valor desejado para a vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("\nVetor antes de ser ordenado:\n");
    for(int i = 0; i<tamanho; i++)printf("%d\t", vetor[i]);
    escolha(vetor, tamanho);
    free(vetor);
    return 0;
}
