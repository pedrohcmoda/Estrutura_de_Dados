#include <stdio.h>

void ordenaInsercao(int vetor[], int tamanho);

int main (){
    int i, vetor[] = {40, 66, 5, 90, 37, 22, 12, 99, 43, 13};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    printf("Vetor antes da ordenacao: \n");
    for (i = 0;i<tamanho; i++)printf("%d\t", vetor[i]);
    ordenaInsercao(vetor, tamanho);
    printf("\nVetor depois da ordenacao: \n");
    for (i = 0;i<tamanho; i++)printf("%d\t", vetor[i]);
    return 0;
}

void ordenaInsercao(int vetor[], int tamanho) {
    int i, j, atual, comparacoes = 0, trocas = 0;
    for (i = 1; i < tamanho; i++) {
        atual = vetor[i];
        j = i - 1;
        comparacoes++;
        while (j >= 0 && vetor[j] > atual) {
            vetor[j + 1] = vetor[j];
            j--;
            trocas++;
            comparacoes++;
        }
        comparacoes++;
        vetor[j + 1] = atual;
    }
    printf("\n\nTotal de comparacoes feitas: %d\n", comparacoes);
    printf("Total de trocas feitas: %d\n", trocas);
}

