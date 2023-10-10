#include <stdio.h>
#include <stdlib.h>
/*
Crie um vetor com 50 elementos e ordene esse vetor com o metodo de ordenacao por selecao.
*/

void selecaoSort(int vetor[], int tamanho){
    int i, j, aux;
    for(i = 0;i<tamanho;i++){
        for (j = i+1; j < tamanho; j++)
        {
            if(vetor[j]<vetor[i]){
                aux = vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            };
        }   
    }
}

int main(){
    int *vetor = malloc(50*sizeof(int));
    for (int valor = 0; valor < 50; valor++) {
        vetor[valor] = 49 - valor;
    }
    int i, j, aux, tamanho = 50;
    printf("Pre ordenacao: \n");
    for (i = 0; i < tamanho; i++)
    {
        printf("%d\t", vetor[i]);
    }
    for(i = 0;i<tamanho;i++){
        for (j = i+1; j < tamanho; j++)
        {
            if(vetor[j]<vetor[i]){
                aux = vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            };
        }
        
    }
    printf("\nPos ordenacao: \n");
    for (i = 0; i < tamanho; i++)
    {
        printf("%d\t", vetor[i]);
    }
    return 0;
}


