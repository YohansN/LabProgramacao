/* 10. Escreva um programa que gere um vetor X com numeros pseudoaleatorios no intervalo [0,N − 1].
Crie um vetor F com N posicoes e armazene em cada posicao de F a quantidade de ocorrencias
dos elementos de X. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 13 //TAM eh o tamanho do vetor X

int main(){
    int x[TAM], i, j, tamVetor = 0;

    srand(time(NULL));

    puts("Qual devera ser o tamanho do vetor? ");
    scanf("%d",&tamVetor);
    puts("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    
    //Passando valores de 0 ate (tamVetor - 1) para X:
    //E mostrando-os
    puts("Vetor X:");
    for (i = 0; i < TAM; i++){
        x[i] = rand() % (tamVetor - 1);
        printf(" %d ",x[i]);
    }
    printf("\n");
    
    int f[tamVetor];
    //Zerando o vetor F:
    for(i = 0; i < tamVetor; i++){
        f[i] = 0;
    }

    //Percorrendo o vetor X e acrescentando 1 no momento em que o valor do vetor X eh igual ao indice do vetor F.
    for (i = 0; i < tamVetor; i++){
        for(j = 0; j < TAM; j++){
            if(i == x[j]){
                f[i] += 1;
            }
        }
    }

    //Mostrando o resultado do vetor X:
    puts("Vetor F:");
    for(i = 0; i < tamVetor; i++){
        printf(" %d ",f[i]);
    }

    return 0;
}