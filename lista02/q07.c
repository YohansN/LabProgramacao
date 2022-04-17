/* 7. Para que a divisao entre 2 numeros possa ser realizada, o divisor nao pode ser nulo (zero).
Escreva um programa para ler 2 valores e imprimir o resultado da divisao do primeiro pelo segundo.
OBS: O programa deve validar a leitura do segundo valor (que nao deve ser nulo).
Enquanto for fornecido um valor nulo a leitura deve ser repetida. */

#include <stdio.h>

int main()
{
    int n1,n2;
    float resultado;
    
    puts("Digite o primeiro valor: ");
    scanf("%d",&n1);
    
    do{
        puts("Digite o segundo valor:");
        scanf("%d",&n2);    
    }while(!n2);
    
    resultado = (float) n1 /(float) n2;
    printf("Resultado de %d / %d: %.2f",n1,n2,resultado);
    
    return 0;
}