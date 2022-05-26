/* 1. Escreva um programa que adicione dois numeros usando ponteiros. Alem do valor da soma, imprima
tambem o endereco de memoria onde o valor resultante dessa soma esta armazenado. */

#include <stdio.h>

int main()
{
    int *pn1, n1, *pn2, n2, soma, *pSoma;
    
    puts("Informe o primeiro numero: ");
    scanf("%d",&n1);
    pn1 = &n1; //recebe o endereço de n1;
    
    puts("Informe o segundo numero: ");
    scanf("%d",&n2);
    pn2 = &n2; //recebe o endereço de n2;
    
    soma = *pn1 + *pn2; //Soma recebe o CONTEUDO apontado por pn1 + o CONTEUDO apontado por pn2;
    pSoma = &soma;

    printf("%d + %d = %d \nEndereço da soma: %p", *pn1, *pn2, *pSoma, pSoma);
    return 0;
}