/* 22. A linguagem C pode representar letras maiusculas, letras minusculas e uma grande variedade de simbolos especiais. 
O C usa internamente pequenos inteiros para representar cada caractere diferente.
O conjunto de caracteres que um computador utiliza e as representacoes dos numeros inteiros correspondentes aqueles caracteres ́e chamado conjunto de caracteres do computador.
Voce pode imprimir o numero inteiro equivalente a letra maiuscula A, por exemplo, executando a insturcao:
printf(”%d”, ’A’);
Escreva um programa em C que imprima os inteiros equivalentes a algumas letras maiusculas, letras minusculas e simbolos especiais. 
No minimo, determine os numeros inteiros equivalentes ao conjunto seguinte: A BCabc 0 12 $ * + / e o caractere espaco em branco. */

#include <stdio.h>

int main()
{
    printf("%d %d %d %d %d %d %d %d%d %d %d %d %d %d", 'A','B','C','a','b','c','0','1','2','$','*','+','/',' ');
    return 0;
}