#include <stdio.h>
#include <math.h>

int alg1(int n){
    int valor = 0;
    valor = 2*pow(n, 2) + 2*n;
    return valor;
}

int alg2(int c, int n){
    int valor = 0;
    valor = 5*n + c;
    return valor;
}

void calculaEficiencia(){
    int c, n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    for(c =0; 1; c++){
        int valor1 = alg1(n);
        int valor2 = alg2(c, n);
        if(valor2>valor1)break;
    }

    printf("A partir do valor %d o segundo algoritmo deixa de ser o mais eficiente.", c);
};


int main(){
    calculaEficiencia();
    return 0;
}