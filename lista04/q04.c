/* 4. Escreva um programa que leia um vetor do usuario e imprima seus valores e seus enderecos. 
Teste o vetor com tipos de dados diferentes, analise os enderecos. O que voce observou? */

#include <stdio.h>
#define TAM 3

int main()
{
    int i, inteiros[TAM], *pInteiros = NULL;
    float flutuantes[TAM], *pFlutuantes = NULL;
    char caracteres[TAM], *pCaracteres = NULL;
    
    pInteiros = inteiros;
    puts("Digite valores inteiros:");
    for(i = 0; i < TAM; i++){
        printf("Digite o %dº valor: \n",i+1);
        scanf("%d",pInteiros + i);
    }
    printf("\n");
    
    pFlutuantes = flutuantes;
    puts("Digite valores flutuantes:");
    for(i = 0; i < TAM; i++){
        printf("Digite o %dº valor: \n",i+1);
        scanf("%f",pFlutuantes + i);
    }
    printf("\n");
    
    pCaracteres = caracteres;
    puts("Digite caracteres:");
    for(i = 0; i < TAM; i++){
        printf("Digite o %dº valor: \n",i+1);
        getchar();
				scanf("%c",pCaracteres + i);
    }
    printf("\n");
    
    
    for(i = 0; i < TAM; i++)
        printf("Valor:\t %d \t Endereco:\t [%p]\n", *(pInteiros + i), pInteiros + i);
    
    for(i = 0; i < TAM; i++)
        printf("Valor:\t %.2f \t Endereco:\t [%p]\n", *(pFlutuantes + i), pFlutuantes + i);
    
    for(i = 0; i < TAM; i++)
        printf("Valor:\t %c \t Endereco:\t [%p]\n", *(pCaracteres + i), pFlutuantes + i);

    return 0;
}