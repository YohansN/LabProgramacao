/* 2. Faca um programa em C que leia uma string e um caractere do usuario e informe se a string de
entrada contem o caracter fornecido. */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define TAM 100

int main()
{
    char frase[TAM];
    char letra;
    int i;
    bool contem = false;
    
    puts("Digite uma frase: ");
    scanf("%[^\n]",frase);
    puts("Digite um caracter: ");
    scanf(" %c",&letra);
    
    for(i = 0; i < strlen(frase); i++){
        if(frase[i] == letra){
            contem = true;
        }
    }
    
    contem == true ? puts("Contem!") : puts("Nao contem.");

    return 0;
}