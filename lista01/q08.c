/* 8. Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao
quadrado.*/

#include <stdio.h>
#include <math.h>

int main() {
int x;
double power;
printf("Digite um valor inteiro para x: ");
scanf("%d",&x);
power = pow(x,2);
printf("%d elevado ao quadrado fica = %.0lf", x, power);
return 0;
}