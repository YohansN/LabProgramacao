/* 23. Escreva um programa que mostre a diferenca entre pre-incrementar e pos-incrementar usando o operador –. */

#include <stdio.h>

int main()
{
    int num = 10;
    
    printf("Numero original: num = %d\n",num);
    
    printf("Pos-incremento: num-- = %d\n",num--);
    printf("O valor so sera decrementado na proxima instrucao -> num = %d\n",num);
    
    num = 10;
    
    printf("Pre-incremento: --num = %d\n",--num);
    puts("O valor eh decrementado no mesmo momento");

}