/* 26. Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distancia entre os dois
pontos no plano. (Utilize a funcao sqrt (numero), biblioteca math.h). */

#include <stdio.h>
#include <math.h>

int main()
{
    int x1,x2,y1,y2, distancia;
    puts("Digite o valor de x e y do primeiro ponto:");
    scanf("%d %d",&x1, &y1);
    puts("Digite o valor de x e y do segundo ponto:");
    scanf("%d %d",&x2, &y2);
    distancia = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    printf("A distancia entre os pontos (%d,%d) e (%d,%d) eh (%d).",x1,y1,x2,y2,distancia);
    return 0;
}