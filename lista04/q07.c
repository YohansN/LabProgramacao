/* 7. Escreva um programa que concatene duas strings utilizando ponteiros. */

#include <stdio.h>
#define TAM 100

int main()
{
    char frase1[TAM], *pFrase1, frase2[TAM], *pFrase2;
    int i;
    
    puts("Digite uma frase: ");
    scanf("%[^\n]",frase1);
    getchar();
    pFrase1 = frase1;
    
    puts("Digite outra frase: ");
    scanf("%[^\n]",frase2);
    pFrase2 = frase2;
    
    for(i = 0; frase1[i] != '\0'; i++){
        printf("%c",*(pFrase1 + i));
    }
    
    for(i = 0; frase2[i] != '\0'; i++){
        printf("%c",*(pFrase2 + i));
    }
    
    return 0;
}