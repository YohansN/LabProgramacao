/*9. Escreva um programa que leia um valor numerico inteiro e apresente como resultado os seus valores
sucessor e antecessor. */

#include <stdio.h>

int main()
{
int x;
printf("Digite um valor inteiro para x: ");
scanf("%d",&x);
printf("Valor anterior: %d - Valor passado: %d - Valor posterior: %d", x-1, x, x+1);
return 0;
}