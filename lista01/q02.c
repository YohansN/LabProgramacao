/* 2. Faca um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases
hexadecimal e octal.
Ex.: Entre com o valor: 10
Hexadecimal: A
Octal: 12. */

#include <stdio.h>

int main()
{
int x;
printf("Digite um valor inteiro para x: ");
scanf("%d",&x);
printf("Valor Decimal: %d - Hexadecimal: %x - Octal: %o", x, x, x);
return 0;
}
