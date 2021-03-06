/* 17. Elaborar um programa que apresente os valores de conversao de graus Celsius em graus Fahrenheit,
de 10 em 10 graus, iniciando a contagem em dez graus Celsius e finalizando em cem graus Celsius.
O programa deve apresentar os valores das duas temperaturas. Obs.: Pesquise a formula de conversao. */

#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    for(celsius = 10; celsius <= 100; celsius+=10){
        fahrenheit = 1.8 * celsius + 32;
        printf("C = %.0f° | F = %.0f°\n",celsius, fahrenheit);
    }
    
    return 0;
}