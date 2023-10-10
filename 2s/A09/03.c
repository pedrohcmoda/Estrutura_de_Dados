#include <stdio.h>


void selecaoSort(int vetor[], int tamanho, int *comparacoes, int *trocas){
    int i, j, aux;
    for(i = 0;i<tamanho;i++){
        for (j = i+1; j < tamanho; j++)
        {

           (*comparacoes)++;
            if(vetor[j]<vetor[i]){
                aux = vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
               (*trocas)++;
            };
        }   
    }
}




void insercaoSort(int vetor[], int tamanho, int *comparacoes, int *trocas) {
    int i, j, atual;
    for (i = 1; i < tamanho; i++) {
        atual = vetor[i];
        j = i - 1;
        (*comparacoes)++;
        while (j >= 0 && vetor[j] > atual) {
            vetor[j + 1] = vetor[j];
            j--;
            (*trocas)++;
            (*comparacoes)++;
        }
        (*comparacoes)++;
        vetor[j + 1] = atual;
    }
}




int main(){
    int vetorDez[10000], vetorMil[1000], vetorCem[100];
    int comparaDez, comparaMil, comparaCem;
    int trocaDez, trocaMil, trocaCem;
    trocaDez=0;
    trocaMil=0;
    trocaCem=0;
    comparaDez = 0;
    comparaMil = 0;
    comparaCem = 0;
    for (int i = 0; i < 10000; i++)
    {
        vetorDez[i] = rand()%10000;
    }
        for (int i = 0; i < 10000; i++)
    {
        vetorMil[i] = rand()%1000;
    }
        for (int i = 0; i < 10000; i++)
    {
        vetorCem[i] = rand()%100;
    }

    selecaoSort(vetorDez, 10000, &comparaDez, &trocaDez);
    selecaoSort(vetorMil, 1000, &comparaMil, &trocaMil);
    selecaoSort(vetorCem, 100, &comparaCem, &trocaCem);

    printf("\nORDENACAO ALEATORIA VETOR 10000\n");
    printf("\nORDENACAO ALEATORIA VETOR 10000\n");
    for (int i = 0; i < 10000; i++)
    {
        printf("%d \t", vetorDez[i]);
    }
    printf("\n///////////////////////////////////////////////");
    printf("\nORDENACAO ALEATORIA VETOR 1000\n");
    for (int i = 0; i < 1000; i++)
    {
        printf("%d \t", vetorMil[i]);
    }
    printf("\n///////////////////////////////////////////////");
    printf("\nORDENACAO ALEATORIA VETOR 100\n");
    for (int i = 0; i < 100; i++)
    {
        printf("%d \t", vetorCem[i]);
    }
    printf("\n///////////////////////////////////////////////");
    printf("\nNumero de comparacoes do vetor de 10000: %d, trocas: %d", comparaDez, trocaDez);
    printf("\nNumero de comparacoes do vetor de 1000: %d, trocas: %d", comparaMil, trocaMil);
    printf("\nNumero de comparacoes do vetor de 100: %d, trocas: %d", comparaCem, trocaCem);
    printf("\n\n // Pressione Enter para continuar para os vetores em ordem crescente \\\\");
    getchar();



    trocaDez=0;
    trocaMil=0;
    trocaCem=0;
    comparaDez = 0;
    comparaMil = 0;
    comparaCem = 0;
    for (int i = 0; i < 10000; i++)
    {
        vetorDez[i] = i;
    }
        for (int i = 0; i < 10000; i++)
    {
        vetorMil[i] = i;
    }
        for (int i = 0; i < 10000; i++)
    {
        vetorCem[i] = i;
    }

    selecaoSort(vetorDez, 10000, &comparaDez, &trocaDez);
    selecaoSort(vetorMil, 1000, &comparaMil, &trocaMil);
    selecaoSort(vetorCem, 100, &comparaCem, &trocaCem);
    printf("\nORDENACAO CRESCENTE VETOR 10000\n");
    for (int i = 0; i < 10000; i++)
    {
        printf("%d \t", vetorDez[i]);
    }
    printf("\n///////////////////////////////////////////////");
    printf("\nORDENACAO CRESCENTE VETOR 1000\n");
    for (int i = 0; i < 1000; i++)
    {
        printf("%d \t", vetorMil[i]);
    }
    printf("\n///////////////////////////////////////////////");
    printf("\nORDENACAO CRESCENTE VETOR 100\n");
    for (int i = 0; i < 100; i++)
    {
        printf("%d \t", vetorCem[i]);
    }
    printf("\n///////////////////////////////////////////////");
    printf("\nNumero de comparacoes do vetor de 10000: %d, trocas: %d", comparaDez, trocaDez);
    printf("\nNumero de comparacoes do vetor de 1000: %d, trocas: %d", comparaMil, trocaMil);
    printf("\nNumero de comparacoes do vetor de 100: %d, trocas: %d", comparaCem, trocaCem);
    printf("\n\n // Pressione Enter para continuar para os vetores em ordem decrescente \\\\");
    getchar();



    trocaDez=0;
    trocaMil=0;
    trocaCem=0;
    comparaDez = 0;
    comparaMil = 0;
    comparaCem = 0;
    for (int i = 10000; i > 0; i--)
    {
        vetorDez[i-(i-1)] = i;
    }
        for (int i = 1000; i > 1000; i--)
    {
        vetorMil[i-(i-1)] = i;
    }
        for (int i = 100; i > 0; i--)
    {
        vetorCem[i-(i-1)] = i;
    }

    selecaoSort(vetorDez, 10000, &comparaDez, &trocaDez);
    selecaoSort(vetorMil, 1000, &comparaMil, &trocaMil);
    selecaoSort(vetorCem, 100, &comparaCem, &trocaCem);
    printf("\nORDENACAO DECRESCENTE 10000\n");
    for (int i = 0; i < 10000; i++)
    {
        printf("%d \t", vetorDez[i]);
    }
    printf("\n///////////////////////////////////////////////");
    printf("\nORDENACAO DECRESCENTE VETOR 1000\n");
    for (int i = 0; i < 1000; i++)
    {
        printf("%d \t", vetorMil[i]);
    }
    printf("\n///////////////////////////////////////////////");
    printf("\nORDENACAO DECRESCENTE VETOR 100\n");
    for (int i = 0; i < 100; i++)
    {
        printf("%d \t", vetorCem[i]);
    }
    printf("\n///////////////////////////////////////////////");
    printf("\nNumero de comparacoes do vetor de 10000: %d, trocas: %d", comparaDez, trocaDez);
    printf("\nNumero de comparacoes do vetor de 1000: %d, trocas: %d", comparaMil, trocaMil);
    printf("\nNumero de comparacoes do vetor de 100: %d, trocas: %d", comparaCem, trocaCem);
    printf("\n\n // Pressione Enter para continuar para os metodos de ORDENACAO POR  INSERCAO \\\\");
    getchar();
    



trocaDez=0;
    trocaMil=0;
    trocaCem=0;
    comparaDez = 0;
    comparaMil = 0;
    comparaCem = 0;
    for (int i = 0; i < 10000; i++)
    {
        vetorDez[i] = rand()%10000;
    }
        for (int i = 0; i < 10000; i++)
    {
        vetorMil[i] = rand()%1000;
    }
        for (int i = 0; i < 10000; i++)
    {
        vetorCem[i] = rand()%100;
    }

    insercaoSort(vetorDez, 10000, &comparaDez, &trocaDez);
    insercaoSort(vetorMil, 1000, &comparaMil, &trocaMil);
    insercaoSort(vetorCem, 100, &comparaCem, &trocaCem);

    printf("\nORDENACAO ALEATORIA VETOR 10000\n");
    printf("\nORDENACAO ALEATORIA VETOR 10000\n");
    for (int i = 0; i < 10000; i++)
    {
        printf("%d \t", vetorDez[i]);
    }
    printf("\n///////////////////////////////////////////////");
    printf("\nORDENACAO ALEATORIA VETOR 1000\n");
    for (int i = 0; i < 1000; i++)
    {
        printf("%d \t", vetorMil[i]);
    }
    printf("\n///////////////////////////////////////////////");
    printf("\nORDENACAO ALEATORIA VETOR 100\n");
    for (int i = 0; i < 100; i++)
    {
        printf("%d \t", vetorCem[i]);
    }
    printf("\n///////////////////////////////////////////////");
    printf("\nNumero de comparacoes do vetor de 10000: %d, trocas: %d", comparaDez, trocaDez);
    printf("\nNumero de comparacoes do vetor de 1000: %d, trocas: %d", comparaMil, trocaMil);
    printf("\nNumero de comparacoes do vetor de 100: %d, trocas: %d", comparaCem, trocaCem);
    printf("\n\n // Pressione Enter para continuar para os vetores em ordem crescente \\\\");
    getchar();



    trocaDez=0;
    trocaMil=0;
    trocaCem=0;
    comparaDez = 0;
    comparaMil = 0;
    comparaCem = 0;
    for (int i = 0; i < 10000; i++)
    {
        vetorDez[i] = i;
    }
        for (int i = 0; i < 10000; i++)
    {
        vetorMil[i] = i;
    }
        for (int i = 0; i < 10000; i++)
    {
        vetorCem[i] = i;
    }

    insercaoSort(vetorDez, 10000, &comparaDez, &trocaDez);
    insercaoSort(vetorMil, 1000, &comparaMil, &trocaMil);
    insercaoSort(vetorCem, 100, &comparaCem, &trocaCem);
    printf("\nORDENACAO CRESCENTE VETOR 10000\n");
    for (int i = 0; i < 10000; i++)
    {
        printf("%d \t", vetorDez[i]);
    }
    printf("\n///////////////////////////////////////////////");
    printf("\nORDENACAO CRESCENTE VETOR 1000\n");
    for (int i = 0; i < 1000; i++)
    {
        printf("%d \t", vetorMil[i]);
    }
    printf("\n///////////////////////////////////////////////");
    printf("\nORDENACAO CRESCENTE VETOR 100\n");
    for (int i = 0; i < 100; i++)
    {
        printf("%d \t", vetorCem[i]);
    }
    printf("\n///////////////////////////////////////////////");
    printf("\nNumero de comparacoes do vetor de 10000: %d, trocas: %d", comparaDez, trocaDez);
    printf("\nNumero de comparacoes do vetor de 1000: %d, trocas: %d", comparaMil, trocaMil);
    printf("\nNumero de comparacoes do vetor de 100: %d, trocas: %d", comparaCem, trocaCem);
    printf("\n\n // Pressione Enter para continuar para os vetores em ordem decrescente \\\\");
    getchar();



    trocaDez=0;
    trocaMil=0;
    trocaCem=0;
    comparaDez = 0;
    comparaMil = 0;
    comparaCem = 0;
    for (int i = 10000; i > 0; i--)
    {
        vetorDez[i-(i-1)] = i;
    }
        for (int i = 1000; i > 1000; i--)
    {
        vetorMil[i-(i-1)] = i;
    }
        for (int i = 100; i > 0; i--)
    {
        vetorCem[i-(i-1)] = i;
    }

    insercaoSort(vetorDez, 10000, &comparaDez, &trocaDez);
    insercaoSort(vetorMil, 1000, &comparaMil, &trocaMil);
    insercaoSort(vetorCem, 100, &comparaCem, &trocaCem);
    printf("\nORDENACAO DECRESCENTE 10000\n");
    for (int i = 0; i < 10000; i++)
    {
        printf("%d \t", vetorDez[i]);
    }
    printf("\n///////////////////////////////////////////////");
    printf("\nORDENACAO DECRESCENTE VETOR 1000\n");
    for (int i = 0; i < 1000; i++)
    {
        printf("%d \t", vetorMil[i]);
    }
    printf("\n///////////////////////////////////////////////");
    printf("\nORDENACAO DECRESCENTE VETOR 100\n");
    for (int i = 0; i < 100; i++)
    {
        printf("%d \t", vetorCem[i]);
    }
    printf("\n///////////////////////////////////////////////");
    printf("\nNumero de comparacoes do vetor de 10000: %d, trocas: %d", comparaDez, trocaDez);
    printf("\nNumero de comparacoes do vetor de 1000: %d, trocas: %d", comparaMil, trocaMil);
    printf("\nNumero de comparacoes do vetor de 100: %d, trocas: %d", comparaCem, trocaCem);
    printf("\n\n // Pressione Enter para finalizar o programa \\\\");
    getchar();
    
    
}