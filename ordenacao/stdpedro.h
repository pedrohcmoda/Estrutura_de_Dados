#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void selecaoCrescente(int *vetor, int tamanho){
    int i, j, menor, aux, comparacao=0, troca=0;
    for (i = 0; i < tamanho; i++)
    {
        menor = i;
        for ( j = i+1; j < tamanho; j++)
        {   
            comparacao++;
            if (vetor[j]<vetor[menor])menor = j;
        }
        if (menor != i)
        {
            troca++;
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }
    }
    printf("\nNumero de comparacoes/trocas: %d/%d\n", comparacao, troca);
}


void selecaoDecrescente(int *vetor, int tamanho){
    int i, j, menor, aux, comparacao=0, troca=0;
    for (int i = 0; i < tamanho; i++)
    {
        menor = i;
        for ( j = i+1; j < tamanho; j++)
        {
            comparacao++;
            if (vetor[j]>vetor[menor]) menor = j;
        }
        if (menor != i)
        {
            troca++;
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }   
    }
    printf("\nNumero de comparacoes/trocas: %d/%d\n", comparacao, troca);
}


void insercaoCrescente(int *vetor, int tamanho){
    int i, j, aux, chave, comparacao=0, troca=0;
    for ( i = 1; i < tamanho; i++)
    {
        chave = vetor[i];
        j=i-1;
        comparacao++;
        while(j>=0 && vetor[j] > chave)
        {
            troca++;
            comparacao++;
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = chave;
    }
    printf("\nNumero de comparacoes/trocas: %d/%d\n", comparacao, troca);
}

void insercaoDecrescente(int *vetor, int tamanho){
    int i, j, aux, chave, comparacao=0, troca=0;
    for ( i = 1; i < tamanho; i++)
    {
        chave = vetor[i];
        j=i-1;
        comparacao++;
        while(j>=0 && vetor[j] < chave)
        {
            troca++;
            comparacao++;
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = chave;
    }
    printf("\nNumero de comparacoes/trocas: %d/%d\n", comparacao, troca);
}


void shell_sort(int *A, int tamanho){
  for(int gap = gap=tamanho/2;gap>0;gap /=2){
    for(int i=gap;i<tamanho;i++){

        int temp = A[i];
        int j;

            for(j = i; j>=gap && A[j-gap]>temp;j-=gap){
                A[j] = A[j-gap];
            }

        A[j] = temp;

    }
  }
};

void merge_sort(int a[], int length)
{
  merge_sort_recursion(a, 0, length - 1);
}


/////////////////////////////////////////////////////
void merge_sort_recursion(int a[], int l, int r)
{
  if (l < r)
  {
    int m = l + (r - l) / 2;
  
    merge_sort_recursion(a, l, m);
    merge_sort_recursion(a, m + 1, r);
    merge_sorted_arrays(a, l, m, r); 
  }
}



/////////////////////////////////////////////////////


void merge_sorted_arrays(int a[], int l, int m, int r)
{
  int left_length = m - l + 1;
  int right_length = r - m;
  
  int temp_left[left_length];
  int temp_right[right_length];
  
  int i, j, k;
  
  for (int i = 0; i < left_length; i++)
    temp_left[i] = a[l + i];
  
  for (int i = 0; i < right_length; i++)
    temp_right[i] = a[m + 1 + i];
  for (i = 0, j = 0, k = l; k <= r; k++)
  {
    if ((i < left_length) &&
        (j >= right_length || temp_left[i] <= temp_right[j]))
    {
      a[k] = temp_left[i];
      i++;
    }
    else
    {
      a[k] = temp_right[j];
      j++;
    }
  }  
}

void swap(int *x, int *y){	
	int aux = *y;
	*y=*x;
	*x=aux;
}
void quicksort(int vetor[], int tamanho){
	srand(time(NULL));
	quicksort_recursivo(vetor[], 0, tamanho -1);
}
void quicksort_recursivo(int vetor[], int min, int max){
	if(min<max){
		int pivo= partition(vetor, min, max);
		quicksort_recursivo(vetor, min, pivo-1);
		quicksort_recursivo(vetor, pivo+1, max);
	}
}

int partition(int vetor[], int min, int max){
	int pivo = (min + rand()%(max-min));
	if(pivo!=max){
		swap(&vetor[pivo], &vetor[max]);
	}
	pivo = vetor[max];
	int i = min;
	for(int j = 0;j<max;j++){
		if(vetor[j]<=pivo){
			swap (&vetor[i], &vetor[max];
			i++;
		}
	}
	swap(&vetor[i], &vetor[max]);
	return i;
}





