#include <stdio.h>


void shell_sort(int *A, int tamanho){
  for(int gap = gap=tamanho/2;gap>0;gap /=2){
    
    for(int i=gap;i<tamanho;i++){
        int temp = A[i];
        int j;

            for(j = i; j>=gap && A[j-gap]>temp;j-=gap){
                A[j] = A[j-gap];
                printf("\nVetor apos A[j]=A[j-gap] (troca feita dentro do loop mais interno):\n");
                for(int i = 0;i<tamanho ; i++)printf("%d \t", A[i]);
                printf("\n");
            }
        
        A[j] = temp;
        printf("\nVetor apos A[j]=temp:\n");
        for(int i = 0;i<tamanho ; i++)printf("%d \t", A[i]);
        printf("\n");
    }
    printf("\n\n\nSAIU DO FOR DO MEIO\n\n\n");
  }
};



int main()
{
    int vetor[] = {6, 5, 4, 3, 2, 1};
    int tamanho = 6;
    printf("Vetor antes da ordenação:\n");
    for(int i = 0;i<tamanho ; i++)printf("%d \t", vetor[i]);
    printf("\n\n");
    shell_sort(vetor, tamanho);
    printf("\nVetor após a ordenação:\n");
    for(int i = 0;i<tamanho ; i++)printf("%d \t", vetor[i]);
    return 0;
}
