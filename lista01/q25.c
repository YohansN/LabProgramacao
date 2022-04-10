/* 25. Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos
ha neste tempo .*/
#include <stdio.h>

int main()
{
    float segInicial, min, hora, segFinal;
    printf("Digite um valor em segundos: ");
    scanf("%f",&segInicial);
    hora = segInicial / 3600;
    segFinal = (int) segInicial % 3600;
    min = segFinal / 60;
    segFinal = (int) segFinal % 60;
    
    printf("%.0f hora(s)\n",hora);
    printf("%.0f minuto(s)\n",min);
    printf("%.0f segundo(s)\n",segFinal);
    
    return 0;
}