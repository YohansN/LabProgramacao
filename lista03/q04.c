/* 4. Faca um programa em C que leia duas strings do usuario e informe se elas sao iguais. Faca uma
versao com o uso da funcao strcmp() e outra sem. */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define TAM 100

int main()
{
    int contadorTam1 = 0, contadorTam2 = 0, i, j;
    char frase1[TAM], frase2[TAM];
    bool frasesIguais = false;
    
    puts("Digite uma frase: ");
    gets(frase1);
    puts("Digite outra frase: ");
    gets(frase2);
    
    //Com o uso da funcao strcmp():
    puts("\nResultado usando a funcao strcmp():");
    (strcmp(frase1, frase2)) ? puts("As frases nao sao iguais.") : puts("As frases sao iguais!");
    
    //Sem o uso da funcao strcmp():
    //Verifica se o tamanho das frases sao equivalentes.
    for(i = 0; frase1[i] != '\0'; i++){
        contadorTam1 += 1;
    }
    for(i = 0; frase2[i] != '\0'; i++){
        contadorTam2 += 1;
    }
    //Se tiverem o mesmo tamanho, verificamos letra por letra.
    if(contadorTam1 == contadorTam2){
        frasesIguais = true;
        for(j = 0; j < contadorTam1; j++){
            if(frase1[j] != frase2[j]){
                frasesIguais = false;
                break;
            }
        }
    }
    puts("\nResultado do verificador manual (sem strcmp()):");
    (frasesIguais) ? puts("As frases sao iguais!") : puts("As frases nao sao iguais.");
    
    return 0;
}