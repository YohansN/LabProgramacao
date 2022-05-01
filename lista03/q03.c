/* 3. Faca um programa em C que leia uma string do usuario e informe a quantidade de caracteres da
string fornecida. Nao use a funcao strlen(). */

#include <stdio.h>
#include <string.h>

#define TAM 100

int main()
{
    int contador = 0, i;
    char frase[TAM];
    
    puts("Digite uma frase: ");
    scanf("%[^\n]",frase);
    
    for(i = 0; frase[i] != '\0'; i++){
        contador += 1;
    }

    printf("\nTamanho da frase: %d",contador);
    
    return 0;
}