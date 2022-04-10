/* 24. Escreva um programa que calcule o produto entre um valor dado x por 2 elevado a um valor dado n.
Obs.: Utilize operadores binarios. */

#include <stdio.h>

int main()
{
    int x, n, resultado;
    puts("Digite um valor para x: ");
    scanf("%d",&x);
    puts("Digite um valor para N: ");
    scanf("%d",&n);
    resultado = x * 2 << n;
    printf("(%d * 2)^%d = %d",x,n,resultado);
    return 0;
}