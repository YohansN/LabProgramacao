/* 23. Escreva um programa que receba a entrada de um numero de tres digitos, separe o numero em seus
digitos componentes e reconstrua um numero com os componentes na ordem inversa. 
Exemplo: para entrada de 123, a resposta do programa seria 321. */

#include <stdio.h>

int main()
{
    int num, cen, dez, uni;
    puts("Digite um numero de tres digitos: ");
    scanf("%d",&num);
    cen = num / 100; 
    dez = (num % 100)/10;
    uni = (num % 100) % 10;
    printf("%d%d%d",uni,dez,cen);
    return 0;
}