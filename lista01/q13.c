/* 13. Escreva um programa que leia duas variaveis A e B e efetue a troca dos valores. O objetivo eh que a
variavel A passe a conter o valor de B e a variavel B passe a possuir o valor de A. Apresente os valores
apos a efetivacao do processamento da troca.*/
#include <stdio.h>

int main()
{
    int a, b, aux;
    a = 1;
    b = 2;
    aux = a;
    a = b;
    b = aux;
    printf("a = %d / b = %d",a,b);
    return 0;
}