/* 14. Elabore um programa que apresente a quantidade de numeros divisiveis por 3 pertencentes a faixa
A,B especificada pelo usuario. O programa deve funcionar tanto para A > B quanto para B > A. */

#include <stdio.h>

int main()
{
    int i, a, b, valorInicial, valorFinal, divisiveis = 0, null;
    
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
        i % 3 == 0 ? divisiveis += 1 : null;
    }
    
    printf("A quantidade de numeros divisiveis por 3 na faixa de %d ate %d: %d\n",valorInicial, valorFinal, divisiveis);
    return 0;
}