/* 3. Faca um programa capaz de ler um valor real e escreve-lo com apenas uma casa decimal. */

#include <stdio.h>

int main()
{
float x;
printf("Digite um valor real para x: ");
scanf("%f",&x);
printf("Retorno com apenas uma casa decimal: %.1f", x);
return 0;
}
