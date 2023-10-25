#include <stdio.h>


void selecaoCrescente(int *vetor, int tamanho){
    int i, j, menor, aux, comparacao=0, troca=0;
    for (i = 0; i < tamanho; i++)
    {
        menor = i;
        for ( j = i+1; j < tamanho; j++)
        {   
            comparacao++;
            if (vetor[j]<vetor[menor])menor = j;
        }
        if (menor != i)
        {
            troca++;
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }
    }
    printf("\nNumero de comparacoes/trocas: %d/%d\n", comparacao, troca);
}


void selecaoDecrescente(int *vetor, int tamanho){
    int i, j, menor, aux, comparacao=0, troca=0;
    for (int i = 0; i < tamanho; i++)
    {
        menor = i;
        for ( j = i+1; j < tamanho; j++)
        {
            comparacao++;
            if (vetor[j]>vetor[menor]) menor = j;
        }
        if (menor != i)
        {
            troca++;
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }   
    }
    printf("\nNumero de comparacoes/trocas: %d/%d\n", comparacao, troca);
}


void insercaoCrescente(int *vetor, int tamanho){
    int i, j, aux, chave, comparacao=0, troca=0;
    for ( i = 1; i < tamanho; i++)
    {
        chave = vetor[i];
        j=i-1;
        comparacao++;
        while(j>=0 && vetor[j] > chave)
        {
            troca++;
            comparacao++;
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = chave;
    }
    printf("\nNumero de comparacoes/trocas: %d/%d\n", comparacao, troca);
}

void insercaoDecrescente(int *vetor, int tamanho){
    int i, j, aux, chave, comparacao=0, troca=0;
    for ( i = 1; i < tamanho; i++)
    {
        chave = vetor[i];
        j=i-1;
        comparacao++;
        while(j>=0 && vetor[j] < chave)
        {
            troca++;
            comparacao++;
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = chave;
    }
    printf("\nNumero de comparacoes/trocas: %d/%d\n", comparacao, troca);
}