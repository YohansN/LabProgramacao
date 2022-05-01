/* 9. Faca um programa que leia uma matriz bidimensional do usuario, de dimensao 3x3, e apresente os
elementos da diagonal principal. */

#include <stdio.h>
#include <stdlib.h>

#define TAM 4

int main()
{
    int valorIndice, i, j, k, matriz[TAM][TAM];
    
    //Adicionando valores na matriz:
    for(i = 1; i < 4; i++){ //Linhas
        for(j = 1; j < 4; j++){ //Colunas
            printf("Digite o valor para a matriz no indice [%d][%d]: ",i,j);
            scanf("%d",&valorIndice);
            matriz[i][j] = valorIndice;
        }
    }
    puts("\n");
    
    //Mostrando a matriz:
    for(i = 1; i < 4; i++){
        for(j = 1; j < 4; j++){
            printf("|%d|",matriz[i][j]);
        }
        puts("\n");
    }
    
    //Pegando os valores da diagonal principal:
    i = 1;
    j = 1;
    for(k = 1; k < 4; k++){
        if(i == j){
            printf("Diagonal indice [%d][%d]: %d\n", k, k, matriz[k][k]);
        }
        i += 1;
        j += 1;
    }
    
    return 0;
}