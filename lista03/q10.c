/* 10. Faca um programa que gere uma matriz bidimensional com elementos aleatorios e receba do usuario
um valor inteiro x. O programa deve informar quantas vezes x aparece na matriz gerada. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int valorMat = 0, i, j, num = 0, contador = 0;
    
    puts("Digite um numero para ser o indice da matriz: ");
    scanf("%d",&valorMat);
    int matriz[valorMat][valorMat];
    puts("Digite um valor a ser buscado dentro da matriz: ");
    scanf("%d", &num);
    
    srand(time(NULL));
    
    //Adicionando valores na matriz:
    for(i = 0; i < valorMat; i++){
        for(j = 0; j < valorMat; j++){
            matriz[i][j] = rand() % 10;
        }
    }
    
    //Mostrando a matriz:
    for(i = 0; i < valorMat; i++){
        for(j = 0; j < valorMat; j++){
            printf("|%d|",matriz[i][j]);
        
        }
        puts("\n");
    }
    
    //Buscando valor na matriz:
    for(i = 0; i < valorMat; i++){
        for(j = 0; j < valorMat; j++){
            (num == matriz[i][j]) ? contador++ : num;
        }
    }
    
    printf("O numero %d aparece %d vezes na matriz!", num, contador);
    
    return 0;
}