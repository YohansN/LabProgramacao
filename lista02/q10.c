/* 10. Elabore um programa que apresente os quadrados dos numero inteiros multiplos de 4 existentes na
faixa de valores de 15 a 90. */

#include <stdio.h>

int main()
{
    int i, multiplo, quadrado;
    
    for(i = 15; i <= 90; i++){
        if(i % 4 == 0){
            multiplo = i;
            quadrado = multiplo*multiplo;
            printf("Quadrado de %d: %d\n",multiplo, quadrado);
        }   
    }
    
    return 0;
}