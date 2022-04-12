/* 4. Implementar um programa para resolver o seguinte problema: 
Jose tem 150 centimetros e cresce 2 centimetros por ano.
O Pedro tem 110 centimetros e cresce 3 centimetros por ano.
Em quantos anos Pedro ser ́a maior que Jose? */

#include <stdio.h>
int main()
{
    int jose = 150, pedro = 110, anosDecorridos = 0;
    
    while(jose > pedro){
        anosDecorridos++;
        jose += 2;
        pedro += 3;
    }
    
    printf("Pedro será maior que Jose em %d anos.",anosDecorridos);
    return 0;
}