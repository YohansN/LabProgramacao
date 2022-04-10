/* 4. Sabendo que os argumentos da funcao ”printf” podem ser expressoes (a+b, a/b, a*b...), e nao somente
argumentos, faca um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e
seu meio. */

#include <stdio.h>
#include <math.h>

int main()
{
int x;
printf("Digite o valor de x: ");
scanf("%d", &x);
printf("O triplo de %d = %d \nO quadrado de %d = %.2lf \nA metade de %d = %d", x , x*3, x, sqrt(x), x, x/2);
return 0;
}