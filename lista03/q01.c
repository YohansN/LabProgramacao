/* 1. Faca um programa em C que leia um vetor do tipo float com 15 elementos e apresente a soma do
menor e maior elemento do vetor fornecido. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define TAM 15

int main()
{
    float vetor[TAM], maiorNumero, menorNumero;
    bool verificador = false;
    int i, j, k;
    srand(time(NULL));
    
    for(i = 0; i < 15; i++){
        vetor[i] = rand()%100;    
    }
    
    for(j = 0; j < 15; j++){
        if(!verificador){
            maiorNumero = vetor[j];
            menorNumero = vetor[j];
            verificador = true;
        }
        else{
            maiorNumero = (maiorNumero < vetor[j]) ? vetor[j] : maiorNumero;
            menorNumero = (menorNumero > vetor[j]) ? vetor[j] : menorNumero;   
        }
    }
    
    for(k = 0; k < 15; k++){
        printf(" |%.0f| ",vetor[k]);
    }
    
    printf("\nA soma do maior e do menor elemento do vetor é %.0f + %.0f = %.0f",maiorNumero, menorNumero, maiorNumero + menorNumero);
    
    return 0;
}