#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void merge(char A[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    char L[n1 + 1], R[n2 + 1];
    for (int i = 0; i < n1; i++) {
        L[i] = A[p + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = A[q + 1 + j];
    }
    L[n1] = 'Z' + 1;
    R[n2] = 'Z' + 1;
    int i = 0, j = 0;
    for (int k = p; k <= r; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }
}

void merge_sort(char *A, int p, int r){
    if (p<r){
        int q = (p+r)/2;
        merge_sort(A, p, q);
        merge_sort(A, q+1, r);
        merge(A, p, q, r);
    }
}


int main() {
    char word[] = "EXAMPLE";
    int n = strlen(word);
    printf("Palavra original: %s\n", word);
    merge_sort(word, 0, n - 1);
    printf("Palavra ordenada: %s\n", word);
    return 0;
}