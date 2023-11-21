#include <stdio.h>
#include <stdlib.h>

int num_moedas(int N, int M, int m[]) {
    int troco = 0, moedinhas;
    for (int i = 0; i < M; i++) {
        moedinhas = N / m[i];
        troco += moedinhas;
        N -= moedinhas * m[i];
    }
    return troco;
}

int main() {
    int M, i, *m;
    printf("Digite o valor de quantas moedas diferentes terão: ");
    scanf("%d", &M);
    m=malloc(M*sizeof(int));
    printf("\nDigite em ordem decrescente\n");
    for (int j = 0; j < M; j++) {
        printf("Digite a moeda: ");
        scanf("%d", &m[j]);
    }
    printf("Digite o valor que do troco: ");
    scanf("%d", &i);

    printf("Numero de moedas: %d", num_moedas(i, M, m));
    free(m);
    return 0;
}
