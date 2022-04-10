/* 11. Elabore um programa que apresente o valor da conversao em dolar de um valor lido em real. O
programa deve solicitar o valor da cotação do dolar e tambem a quantidade de reais que o usuario
deseja converter. */
#include <stdio.h>

int main()
{
    float dolares, reais;
    printf("Valor em reais a ser convertido: R$ ");
    scanf("%f",&reais);
    printf("Cotacao atual do dolar: 4.80 \n");
    dolares = reais/4.8;
    printf("%.2f reais sao %.2f dolares.",reais, dolares);
    return 0;
}