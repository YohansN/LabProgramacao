/* 1. Escreva um programa que crie uma Estrutura Node com dois campos (x, y) do tipo inteiro.
Realize a leitura e exibicao dos dados dessa Estrutura utilizando um ponteiro para essa estrutura.*/

#include <stdio.h>

typedef struct{
    int x;
    int y;
}Node;


int main(){

    Node node;
    Node *pNode = &node;
    
    puts("Informe o valor de X:");
    scanf("%d",&pNode->x);
    
    puts("Informe o valor de Y:");
    scanf("%d",&pNode->y);
    
    puts("------------------------");
    printf("X: %d \nY: %d",pNode->x, pNode->y);

    return 0;
}