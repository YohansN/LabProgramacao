/* 21. Escreva um programa que leia dois inteiros e entao determine e imprima se o primeiro eh multiplo do
segundo. Obs.: Nao utilizar estrutura dedecisao if. */

#include <stdio.h>

int main()
{
    int n1,n2;
    puts("Digite o primeiro valor: ");
    scanf("%d",&n1);
    puts("Digite o segundo valor: ");
    scanf("%d",&n2);
    (n1 % n2) ? puts("Nao multiplo") : puts("Multiplo");
    return 0;
}