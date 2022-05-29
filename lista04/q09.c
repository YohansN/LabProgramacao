/* 9. Implemente o metodo de ordenacao bolha utilizando ponteiros. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int main()
{
    int vetor[TAM], *pVetor = NULL, aux, *pAux = NULL, i, j;
    pAux = &aux;
    
    //Gerando vetor aleatoriamente:
    srand(time(NULL));
    
    for(i = 0; i < TAM; i++){
        vetor[i] = rand() % 100;
    }
    pVetor = vetor;
    
    //Mostrando vetor:
    puts("Vetor pre ordenacao:\n");
    for(i = 0; i < TAM; i++){
        printf(" %d ",*(pVetor + i));
    }
    
    //Ordenando vetor:
    for(j = 0; j < TAM - 1; j++){
        for(i = 0; i < TAM - 1; i++){
            if (*(pVetor + i) > *(pVetor + i + 1)){
                //endereço auxiliar aponta para valor de vetor[i+1]
                aux = *(pVetor + i + 1);
                //endereço vetor[i+1] aponta para valor vetor[i] 
                vetor[i+1] = *(pVetor + i);
                //endereco vetor[i] = aponta para valor de auxiliar
                vetor[i] = *pAux;
            }
        }    
    }
    
    //Mostrando vetor ordenado:
    puts("\nVetor pos ordenacao:\n");
    for(i = 0; i < TAM; i++){
        printf(" %d ",*(pVetor + i));
    }
    
    
    return 0;
}