/* 11. Escreva um programa que gere dois vetores (X e Y ) com numeros
pseudoaleatorios no intervalo [0,N − 1]. 
Crie uma matriz M com dimensoes NxN que armazene as coocorrencias dos elementos
de X e Y da seguinte forma: */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 7

int main() {
    int x[TAM], y[TAM], i, j;
    
    int matriz[TAM][TAM];
    
    srand(time(NULL));
    
    //Gerando valores aleatorios para os indices
    for (i = 0; i < TAM; i++){
        x[i] = rand() % TAM; // Coluna
        y[i] = rand() % TAM; // Linha
    }
    
    //Imprimindo vetores:
    for(i = 0; i < TAM; i++){
        printf(" %d ",x[i]);
    }
    printf("\n");
    for(i = 0; i < TAM; i++){
        printf(" %d ",y[i]);
    }
    printf("\n");
    
    
    // preenche a matriz com zeros
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            matriz[i][j] = 0;
        }
    }
    printf("\n");
    
    //Adiciona 1 nos indices:
    for (j = 0; j < TAM; j++){
        matriz[x[j]][y[j]] += 1;
    }
    
    //Imprime matriz:
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            printf(" %d ",matriz[i][j]);
        }
        printf("\n");
    }
  
    
    return 0;
}