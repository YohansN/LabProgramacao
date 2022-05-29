/* 6. Escreva um programa que copie uma string para outra usando ponteiros. */

#include <stdio.h>
#define TAM 100

int main()
{
    char stringOriginal[TAM], *pStringOriginal = NULL, stringCopia[TAM], *pStringCopia = NULL;
    int i;
    
    puts("Digite a frase original:\n");
    scanf("%[^\n]",stringOriginal);
    pStringOriginal = stringOriginal;
    
    for(i = 0; *(pStringOriginal + i) != '\0'; i++){
        stringCopia[i] = *(pStringOriginal + i);
    }
    
    puts("\nFrase copia:");
    for(i = 0; *(stringCopia + i) != '\0'; i++){
        printf("%c", *(stringCopia + i));
    }
    
    return 0;
}