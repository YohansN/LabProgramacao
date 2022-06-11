/* 5. Escreva um programa que some todos os elementos de um vetor de float alocado dinamicamente.
A quantidade de elementos devem ser fornecidas por linha de comando.
Utilize a funcao rand() para alimentar o vetor com valores pseudo-aleatorios. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    float *pVetor = NULL, somatorio = 0;

    pVetor = malloc(atoi(argv[1]) * sizeof(float));

    srand(time(NULL));

    for (int i = 0; i < atoi(argv[1]); i++)
    {
        *(pVetor + i) = rand() % 100;
        somatorio += *(pVetor + i);
    }

    for (int i = 0; i < atoi(argv[1]); i++)
    {
        printf(" %d ",*(pVetor + i));
    }

    printf("\nSomatorio: %.2f", somatorio);

    return 0;
}