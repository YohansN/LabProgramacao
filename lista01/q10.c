/* 10. Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a
formula VOLUME = COMPRIMENTO * LARGURA * ALTURA. */
#include <stdio.h>

int main()
{
    float comprimento, largura, altura, volume;
    printf("Comprimento: ");
    scanf("%f",&comprimento);
    printf("Largura: ");
    scanf("%f",&largura);
    printf("Altura: ");
    scanf("%f",&altura);
    volume = comprimento * largura * altura;
    printf("%.2f cm³",volume);
    return 0;
}