#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void swap(int *x, int *y);
void quicksort(int vetor[], int tamanho);
void quicksort_recursive(int vetor[], int min, int max);
int partition(int vetor[], int min, int max);

int main(){
    int i, vetor[] = {3,4,9,2,5,1,8,6,3}, tamanho=9;
    printf("Vetor antes da ordenação: \n");
    for ( i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    quicksort(vetor, tamanho);
    printf("\n Vetor apos a ordenacao: \n");
    for(i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    return 0;

}

// so faz a troca
void swap (int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// facilita a chamada na main
void quicksort (int vetor[], int tamanho) {
    srand(time(NULL));
    quicksort_recursive(vetor, 0, tamanho-1);
}


// fica se chamando 
void quicksort_recursive (int vetor[], int min, int max) {
    // o if que para a chamada recursiva
    if(min<max){
        // define o valor de referencia
        int pivo = partition(vetor, min, max);
        //ordena os menores ?
        quicksort_recursive(vetor, min, pivo-1);
        //ordena os maiores ?
        quicksort_recursive(vetor, pivo+1, max);
    
    }
}

// troca as posicoes e joga o pivo pro meio
int partition (int vetor[], int min, int max) {

    // gera aleatoriamente pra casos onde o max nao é o melhor pivo, mas pode gerar problemas se selecionar o um pivo ruim

    int pivo = min + (rand() % (max-min)); // gera uma posicao aleatorio pro pivo
    if(pivo != max){
        swap(&vetor[pivo], &vetor[max]);
    }
    pivo = vetor[max];
    int i = min;
    for(int j = min; j<max;j++){
        if(vetor[j]<=pivo){
            swap(&vetor[i], &vetor[j]);
            i++;
        }
    }
    swap(&vetor[i], &vetor[max]);
    return i;
}