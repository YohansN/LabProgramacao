/* 12. Elaborar um programa que mostre os resultados da tabuada de um numero inteiro qualquer, a qual
deve ser apresentada de acordo com sua forma tradicional. */

#include <stdio.h>

int main()
{
    int num, i;
    
    puts("Digite um numero inteiro para ver sua tabuada: ");
    scanf("%d",&num);
    
    for(i = 1; i <= 10; i++){
        printf("%d X %d = %d\n", num, i, num*i);
    }
    
    return 0;
}