/* 2. Escreva um programa em C que utilize uma Estrutura estoque que contem uma string com o
nomePeca, um numero inteiro para identificar o numero da peca, o preco em ponto flutuante e um
elemento inteiro para identificar o numero do pedido. */

#include <stdio.h>
#define TAM 30

struct Estoque {
    char nomePeca[TAM];
    int numeroPeca;
    float precoPeca;
    int numPedido;
};

int main(){
    struct Estoque pecas;
    puts("Estocagem:\n");
    
    puts("Informe o nome da peca:");
    scanf("%[^\n]",&pecas.nomePeca);
    getchar();
    puts("Informe o numero da peca:");
    scanf("%d",&pecas.numeroPeca);
    puts("Informe o preco da peca:");
    scanf("%f",&pecas.precoPeca);
    puts("Informe o numero do pedido:");
    scanf("%d",&pecas.numPedido);
    puts("Tabela Estocagem de Pecas:");
    printf("Nome: %s\nNumero da Peca: %d\nPreco: R$ %.2f\nNumero do Pedido: #%d", pecas.nomePeca, pecas.numeroPeca, pecas.precoPeca, pecas.numPedido);
    return 0;
}