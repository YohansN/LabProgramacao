/* 17. Escrever um programa que receba um valor inteiro do usuario e apresente o seu valor absoluto (modulo).
Nao utilize estrutura de decisao if.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Digite um valor para retornar o mesmo valor em modulo: ");
    scanf("%d",&num);
    printf("%d",abs(num));
    return 0;
}