#include <stdio.h>
#include <stdlib.h>

int compara;

int buscaBinaria(double A[], int n, int x){
    int p = 1, r = n, q = 0;
    while(p<=r){
        compara++;
            q = (p+r)/2;
            if(A[q]==x){
                return q;
            }else if(A[q]>x){
                r = q-1;
            }else{
                p = q+1;
            };
    }
    return -1;
}

int main(){
    double vetor[]= {1.0, 3.0, 7.0, 8.0, 11.0, 16.0, 21.0, 25.0};
    int q = buscaBinaria(vetor, 8, 3.0);
    printf("Onde achou: %d, Quantas vezes foi comparado: %d", q, compara);
    return 0;
}