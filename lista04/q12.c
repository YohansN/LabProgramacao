/* Reimplemente a questao considerando que o vetor Y  eh dado em funcao de X da seguinte forma:

    | xi
    | if 0 < r ≤ 3
    | xi − 1 if 3 < r ≤ 5
yi =| xi + 1 if 5 < r ≤ 7
    | xi − 2 if 8 < r ≤ 9
    | xi + 2 if 9 < r ≤ 10
    
onde r eh um numero pseudoaleatorio, xi e yi correspondem ao i-esimo elemento do vetor X e Y, respectivamente. 
Considere os valores limites definidos na questao anterior para yi, caso o valor obtido a partir de xi esteja fora da faixa.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 7

int main() {
    int x[TAM], y[TAM], i, j, r;
    int matriz[TAM][TAM];
    
    srand(time(NULL));
    
    
    //Gerando valores aleatorios para o vetor x e declarando o vetor Y em funcao de X:
    puts("Valores do R:");
    for (i = 0; i < TAM; i++){
        x[i] = rand() % TAM; // Coluna
        r = rand() % TAM;
        printf(" %d ", r);
        
        if(0 < r && r <= 3){ //1, 2, 3
            y[i] = x[i];
        }
        else if(3 < r && r <= 5){ //4, 5
            y[i] = x[i] - 1;
        }
        else if(5 < r && r <= 7){ // 6, 7
            y[i] = x[i] + 1;
        }
        else if(8 < r && r <= 9){ // 9
            y[i] = x[i] - 2;
        }
        else if(9 < r && r <= 10){ // 10
            y[i] = x[i] + 2;
        }
        else{
            y[i] = rand() % TAM;
        }
    }
    printf("\n");
    
    //Imprimindo vetores:
    puts("Vetor X: ");
    for(i = 0; i < TAM; i++){
        printf(" %d ",x[i]);
    }
    printf("\n");
    
    puts("Vetor Y: ");
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