/* 5. Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser
pago, considerando que o restaurante cobra 10% de taxa para o garcom.*/

#include <stdio.h>

int main()
{
float conta, total;
printf("Valor da conta: ");
scanf("%f", &conta);
total = conta + (conta * 0.1);
printf("O valor total, com a gorjeta de 10%% inclusa, fica: R$ %.2f",total);
return 0;
}