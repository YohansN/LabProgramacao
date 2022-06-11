/* 4. Escreva um programa que dado um vetor X de inteiros, realize a seguinte normalizacao dos dados (min-max):

X' = X − min(X) / max(X) − min(X)

onde min() e max() correspondem ao menor e maior do vetor, respectivamente. */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    bool primeiraVerificacao = true;
    int vetor[atoi(argv[1])], *pVetor, menorValor, maiorValor, enderecoMenor, enderecoMaior, valorMedio;

    pVetor = malloc(atoi(argv[1]) * sizeof(int));

    srand(time(NULL));
    for (int i = 0; i < atoi(argv[1]); i++)
    {
        *(pVetor + i) = rand() % (10 + 1 - 1) + 1;
    }

    // Guardando o menor e o maior elemento do vetor:
    for (int i = 0; i < atoi(argv[1]); i++)
    {
        if (primeiraVerificacao)
        {
            menorValor = *(pVetor + i);
            maiorValor = *(pVetor + i);
            enderecoMenor = i;
            enderecoMaior = i;
            primeiraVerificacao = false;
        }

        else
        {
            if (menorValor > *(pVetor + i))
            {
                menorValor = *(pVetor + i);
                enderecoMenor = i;
            }
            if (maiorValor < *(pVetor + i))
            {
                maiorValor = *(pVetor + i);
                enderecoMaior = i;
            }
        }
    }
    printf("Maior valor: %d\n Menor valor: %d\n", *(pVetor + enderecoMaior), *(pVetor + enderecoMenor));

    // Mostrando novo vetor (antes):
    puts("Vetor Antes");
    for (int i = 0; i < atoi(argv[1]); i++)
    {
        printf(" %d ", *(pVetor + i));
    }

    printf("\n");

    // Normalização:
    valorMedio = *(pVetor + enderecoMaior) - *(pVetor + enderecoMenor);
    for (int i = 0; i < atoi(argv[1]); i++)
    {
        *(pVetor + i) = (*(pVetor + i) - menorValor) / valorMedio;
    }

    // Mostrando novo vetor (depois):
    puts("Vetor Depois");
    for (int i = 0; i < atoi(argv[1]); i++)
    {
        printf(" %d ", *(pVetor + i));
    }

    return 0;
}