#include <stdio.h>
#include <math.h>

int caso1_alg1 (int num){
    return 2*pow(num, 2) + 5*num;
}
int caso1_alg2 (int num){
    return 500*num + 4000;
}


int caso2_alg1 (int num){
    return 2*pow(num, 3)+2*num;
}

int caso2_alg2 (int num){
    return 50000*num+600000;
}

void comparar_alg1(){
    int tst1, tst2, i;
    printf("Teste para Caso 1: ");
    for (i = 0; 1 ; i++)
    {
        tst1 = caso1_alg1(i);
        tst2 = caso1_alg2(i);
        if(tst2<tst1){
            break;
        }

    }
    printf("a partir do %d o segundo algoritmo é melhor\n", i);
}

void comparar_alg2(){
    int tst1, tst2, i;
    printf("Teste para Caso 2: ");
    for (i = 0; 1 ; i++)
    {
        tst1 = caso2_alg1(i);
        tst2 = caso2_alg2(i);
        if(tst2<tst1){
            break;
        }

    }
    printf("a partir do %d o Segundo algoritmo é melhor\n", i);
}



int main(){
    comparar_alg1();
    comparar_alg2();
    return 0;
}