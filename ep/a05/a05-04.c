#include <stdio.h>


int find_number(int *vet, int i, int number){
    if(vet[0]=number) return 1;
    for(int i = 0; i < number; i++){
        if(vet[i]==number){
            return i;
        }
    }
    printf("O numero nao foi encontrado");
    return 0;
}


int main(){
    int *vet, i;
    i = 8;
    vet = malloc(i * sizeof(int));
    printf("Numero de comparações no melhor caso: %d\n", find_number(vet, i, 0));
    printf("Numero de comparações no pior caso: %d\n", find_number(vet, i, vet[i-1]));
    
}