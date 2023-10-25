#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void merge(int A[], int p, int q, int r, int *operacao) {
    
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1 + 1], R[n2 + 1];
    for (int i = 0; i < n1; i++) {
        L[i] = A[p + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = A[q + 1 + j];
    }
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    int i = 0, j = 0;
    for (int k = p; k <= r; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
        (*operacao)++;
    }
}

int main() {
    int A[] = {2, 4, 5, 7, 1, 2, 3, 6};
    int operacao=0;
    int n = sizeof(A) / sizeof(A[0]);
    printf("Arranjo original:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    merge(A, 0, n / 2 - 1, n - 1, &operacao);

    printf("Arranjo ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\nNumero de operacoes feitas: %d", operacao);
    printf("\n");
    return 0;
}
