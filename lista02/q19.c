/* 19. Elaborar um programa que apresente a media aritmetica dos numeros inteiros existentes entre uma
faixa especificada pelo usuario. */

#include <stdio.h>

int main()
{
    int num1, num2, totalNumeros, soma = 0;
    float media;
    
    puts("Digite o primeiro valor: ");
    scanf("%d",&num1);
    puts("Digite o segundo valor: ");
    scanf("%d",&num2);
    
    if(num1 < num2){
        totalNumeros = num2 - num1;
        printf("A media da soma dos valores [%d , %d] = ",num1, num2);
        for(num1; num1 <= num2; num1++){
            soma += num1;
        }
        media = (float)soma/(float)totalNumeros;
        printf("%.2f",media);
    }
    else if(num1 > num2){
        totalNumeros = num1 - num2;
        printf("A media da soma dos valores [%d , %d] = ",num2, num1);
        for(num2; num2 <= num1; num2++){
            soma += num2;
        }
        media = (float)soma/(float)totalNumeros;
        printf("%.2f",media);
    }
    else{
        totalNumeros = num1;
        soma += num1;
        media = (float)soma/(float)totalNumeros;
        printf("A media da soma dos valores [%d , %d] = %.2f",num2, num1, media);
    }
    
    return 0;
}