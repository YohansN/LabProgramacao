/* 2. Escreva um programa em C que informe o endereco do menor elemento de um vetor de inteiros gerado.
A quantidade de elementos desse array deve ser fornecido por linha de comando. */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    int menorValor, tamanhoVetor, *pVetor = NULL, endereco;
    bool primeiraVerificacao = true;

    // Alocando memoria no vetor:
    pVetor = (int *) malloc(atoi(argv[1]) * sizeof(int));

    srand(time(NULL));

    // Gerando numeros aleatorios e pondo-os no vetor
    for (int i = 0; i < atoi(argv[1]); i++)
    {
        *(pVetor + i) = rand() % 10;
    }
    
    // Mostrando o vetor na tela:
    for (int i = 0; i < atoi(argv[1]); i++)
    {
        printf(" %d ", *(pVetor + i));
    }
    
    // Definindo qual o menor valor:
    for (int i = 0; i < atoi(argv[1]); i++)
    {
        if (primeiraVerificacao)
        {
            menorValor = *(pVetor + i);
            endereco = i;
            primeiraVerificacao = false;
        }

        else
        {
            if (menorValor > *(pVetor + i))
            {
                menorValor = *(pVetor + i);
                endereco = i;
            }
        }
    }
    
    // Saída:
    printf("\nO menor elemento da lista: %d\tEndereco: [%p]", menorValor, (pVetor + endereco));

    free(pVetor);
    return 0;
}