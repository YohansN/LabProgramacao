/* 5. Escreva um programa que encontre o tamanho de uma string fornecida. Utilize ponteiros. */

#include <stdio.h>

#define TAM 100

int main()
{
    char string[TAM], *p;
    int contador = 0;
    
    puts("Digite uma frase de ate 100 caracteres: ");
    gets(string);
    
    for(p = string; *p != '\0'; p++){
        contador++;
    }
    
    printf("%d",contador);
    
    return 0;
}