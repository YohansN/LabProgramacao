/* 15. Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o numero de
dias trabalhados pelo vendedor e imprima o valor liquido a ser pago ao mesmo, sabendo que se ele
trabalhou ate 10 dias nao tem direito a gratificacao, se ele trabalhou acima de 10 dias e ate 20 dias
tem direito a gratificacao de 20%, se ele trabalhou acima de 20 dias tem direito a gratificacao de 30%.
Sempre sao descontados 10% de imposto de renda em cima do valor bruto. */

#include <stdio.h>

int main()
{
    float salario, bonificacao, total, pagamento = 50.25;
    int dias;
    printf("Numero de dias trabalhados: ");
    scanf("%d",&dias);
    salario = pagamento * dias;
    if(dias > 10 && dias <= 20){
        bonificacao = salario + (salario * 20/100);
    }
    else if(dias > 20){
        bonificacao = salario + (salario * 30/100);
    }
    total = bonificacao - (bonificacao * 10/100);
    printf("Valor pagamento final: R$%.2f",total);
    return 0;
}