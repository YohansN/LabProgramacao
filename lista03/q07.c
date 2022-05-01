/* 7. Faca um programa em C que gere um vetor com 3 numeros inteiros pseudoaleatorios no intervalo
[0, 19] e apresente a sua media aritmetica e geometrica. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 4

int main()
{
    int vetor[TAM], i, somatorio = 0, produto = 1;
    float mediaAritmetica, mediaGeometrica;
    
    srand(time(NULL));
    for(i = 0; i < 3; i++){
        vetor[i] = (rand() % (19 + 1 - 0) + 0);
    }
    
    for(i = 0; i < 3; i++){
        somatorio += vetor[i];
        produto *= vetor[i];
    }
    
    //media aritmetica:
    mediaAritmetica = (float)somatorio/3;

    //media geometrica:
    mediaGeometrica = pow((float)produto, 1.0/3.0);
    
    for(i = 0; i < 3; i++){
        printf("|%d|",vetor[i]);
    }
    
    printf("\n");
    printf("Media aritmetica: %.2f\n Media geometrica: %.2f", mediaAritmetica, mediaGeometrica);

		return 0;
}