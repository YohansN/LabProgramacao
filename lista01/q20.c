/* 20. Escreva um programa que receba um numero inteiro e entao determine e imprima se ele eh par ou impar.
Obs.: Nao utilizar estrutura de decisao if.*/
#include <stdio.h>

int main()
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);
    num % 2 ? printf("impar") : printf("par");
    return 0;
}