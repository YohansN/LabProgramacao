/* 7. Faça um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos.*/

#include <stdio.h>

int main() {
int horas, min, seg, total;
printf("Numero de horas: ");
scanf("%d",&horas);
printf("Numero de minutos: ");
scanf("%d",&min);
printf("Numero de segundos: ");
scanf("%d",&seg);
total = horas * 3600 + min * 60 + seg;
printf("O total de segundos de %d:%d:%d sao %d segundos",horas, min, seg, total);
return 0;
}