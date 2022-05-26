/* 8. Escreva um programa que busque um caracter fornecido em uma string utilizando ponteiros. */

#include <stdio.h>
#include <string.h>
#define TAM 100

int main() {
    
    char string[TAM], letra, *p;
    int verificador = 0, j;
    
    puts("Escreva uma frase de ate 100 caracteres: ");
    gets(string);
    
    puts("Digite um Caracter a ser buscado na frase anterior: ");
    scanf("%c",&letra);
    
    for(j = 0; string[j] != '\0'; j++ ){
        if(string[j] == letra){
            p = &string[j];
            verificador = 1;
        }
    }
    
    verificador ? printf("A letra \"%c\" esta na posicao de memoria [%p] da string\nSeu endereco na tabela ASCII é [%p]",letra, p, *p) : printf("A letra \"%c\" nao existe dentro da frase passada!",letra);
    
    return 0;
}