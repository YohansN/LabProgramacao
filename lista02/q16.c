/* 16. Escreva um programa que apresente o somatorio de todos os numeros divisiveis por 3 pertencentes ao
intervalo [0,100] e o somatorio de todos os numeros divisiveis por 5 pertencentes ao intervalo ]100,200].
Obs.: Utilize apenas um laco de repeticao. */

#include <stdio.h>

int main()
{
    int i, somatorioDiv3 = 0, somatorioDiv5 = 0, null;
    
    for(i = 1; i < 200; i++){
        i % 3 == 0 && i < 100 ? somatorioDiv3 += i : null;
        i % 5 == 0 && i > 99 ? somatorioDiv5 += i : null;
    }
    
    printf("Somatorio numeros divisiveis por 3: %d\nSomatorio numeros divisiveis por 5: %d",somatorioDiv3, somatorioDiv5);
    
    return 0;
}