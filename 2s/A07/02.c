#include <stdio.h>

/*
Desenvolva um algoritmo que ordene um vetor de tamanho de tamanho 10.
Crie um vetor com dez elementos (3, 5, 8, 9, 8, 7, 7, 6, 2, 0) e ordene esse vetor.
*/

int main(){
    int vetor[] = {3,5,8,9,8,7,7,6,2,0};
    int i, j, aux, tamanho = sizeof(vetor)/sizeof(int);
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


