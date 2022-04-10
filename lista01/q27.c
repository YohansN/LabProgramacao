/* 27. Escreva um programa que solicite 3 numeros em ponto flutuante e imprima a media aritmetica e
geometrica. (Utilize a funcao pow(base, expoente) da biblioteca math.h).). */

#include <stdio.h>
#include <math.h>

int main()
{
    float n1, n2, n3, mediaAritmetica, mediaGeometrica;
    puts("Digite tres valores:");
    scanf("%f %f %f",&n1, &n2, &n3);
    mediaAritmetica = (n1 + n2 + n3) / 3;
    mediaGeometrica = pow(n1 * n2 * n3,1.0/3.0);
    printf("Media Aritmetica: %.2f\nMedia Geometrica: %.2f",mediaAritmetica,mediaGeometrica);
    return 0;
}