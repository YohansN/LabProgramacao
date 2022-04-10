/* 14. Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em graus
Fahrenheit. A formula de vesao eh F = (9 * C + 160) / 5, sendo F a temperatura Fahrenheit e C a
temperatura em Celsius.*/
#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Temperatura em graus Celsius: ");
    scanf("%f",&celsius);
    fahrenheit = (9 * celsius + 160)/5;
    printf("Temperatura em Fahrenheit: %.2f °F",fahrenheit);
    return 0;
}