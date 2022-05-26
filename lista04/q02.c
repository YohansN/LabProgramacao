/* 2. Escreva um programa que troque o valor de dois numeros utilizando ponteiros. */

#include <stdio.h>

int main()
{
    int *pn1, n1, *pn2, n2, *aux;
    
    puts("Informe o primeiro valor: ");
    scanf("%d",&n1);
    pn1 = &n1; //recebe o endereço de n1;
    
    puts("Informe o segundo valor: ");
    scanf("%d",&n2);
    pn2 = &n2; //recebe o endereço de n2;
    
    //Troca de endereços:
    aux = pn1;
    
    pn1 = pn2;
    
    pn2 = aux;

    printf("Primeiro valor: %d\nSegundo valor: %d", *pn1, *pn2);
    return 0;
}