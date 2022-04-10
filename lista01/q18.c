/* 18. Escreva um programa que leia o raio de um circulo e imprima seu diametro, o valor de sua circunferencia
e sua area. Use o valor de 3,14159 para ”pi”. Faca cada um destes calculos ́dentro da instracao (ou instrucoes) printf e use o especificador de conversao %f. */

#include <stdio.h>
#include <math.h>

int main()
{
    float raio, pi = 3.14159;
    printf("Digite um valor para o raio de um circulo: ");
    scanf("%f",&raio);
    printf("Diametro: %.2f\nCircunferencia: %.2f\nArea: %.2f",raio*2, 2*pi*raio, pi*pow(raio,2));
    return 0;
}