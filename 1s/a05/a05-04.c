#include <stdio.h>
#include <stdlib.h>

int find_number(int *vet, int i, int number) {
    if (vet[0] == number) return 1;
    for (int j = 0; j < i; j++) {
        if (vet[j] == number) {
            return j;
        }
    }
    printf("O numero nao foi encontrado\n");
    return 0;
}

int main() {
    int *vet, i;
    i = 8;
    vet = malloc(i * sizeof(int));
    vet[0] = 0;
    vet[1] = 3;
    vet[2] = 6;
    vet[3] = 2;
    vet[4] = 9;
    vet[5] = 7;
    vet[6] = 0;
    vet[7] = 6;
    printf("Numero de comparações no melhor caso: %d\n", find_number(vet, i, 0));
    printf("Numero de comparações no pior caso: %d\n", find_number(vet, i, 7));
    free(vet);
    return 0;
}
