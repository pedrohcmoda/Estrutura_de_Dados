#include <stdio.h>

int maxMatriz(int matriz[3][3], int *contador) {
    int max = matriz[0][0];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(matriz[i][j] > max) {
                max = matriz[i][j];
                (*contador)++;
            }
        }
    }
    return max;
}

int main(void) {
    int matriz[3][3];
    int contador = 0;
    matriz[0][0] = 2;
    matriz[0][1] = 3;
    matriz[0][2] = 2;
    matriz[1][0] = 5;
    matriz[1][1] = 6;
    matriz[1][2] = 9;
    matriz[2][0] = 1;
    matriz[2][1] = 0;
    matriz[2][2] = 7;
    printf("Maior valor: %d \n", maxMatriz(matriz, &contador));
    printf("Quantas vezes executou a operação: %d \n", contador);
    return 0;
}
