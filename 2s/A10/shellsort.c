#include <stdio.h>
#include <stdlib.h>

void shellsort(int array[], int valor) {
    for (int gap = valor / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < valor; i++) {
            int temp = array[i];
            int j;
            for (j = i; j >= gap && array[j - gap] > temp; j -= gap) {
                array[j] = array[j - gap];
            }
            array[j] = temp;
        }
    }
}

int main() {
    int array[] = {3, 4, 9, 2, 5, 1, 8};
    printf("Array antes da ordenação: \n");
    for (int i = 0; i < 7; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    shellsort(array, 7);
    printf("Array depois da ordenação: \n");
    for (int i = 0; i < 7; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
