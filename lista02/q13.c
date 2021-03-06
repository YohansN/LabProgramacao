/* 13. Elabore um programa que calcule o somatorio de todos os numeros pares pertencentes a faixa A,B
especificada pelo usuario. O programa deve funcionar tanto para A > B quanto para B > A. */

#include <stdio.h>

int main()
{
    int i, a, b, valorInicial, valorFinal, soma = 0, null;
    
    puts("Digite o valor de A: ");
    scanf("%d",&a);
    puts("Digite o valor de B: ");
    scanf("%d",&b);
    
    if(a > b){
        valorInicial = b;
        valorFinal = a;
    }
    else if(a < b){
        valorInicial = a;
        valorFinal = b;
    }
    else{
        valorInicial = a;
        valorFinal = b;
    }
    
    for(i = valorInicial; i <= valorFinal; i++){
        i % 2 == 0 ? soma += i : null;
    }
    
    printf("Somatoria dos valores pares de %d ate %d: %d\n",valorInicial, valorFinal, soma);
    return 0;
}