/* 16. Desenvolva um programa que calcule o salario liquido de um professor. Para elaborar o programa,  eh
necessario possuir alguns dados, tais como o valor da hora aula, numero de horas trabalhadas no mes e
percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu salario bruto para fazer
o desconto e ter o valor do salario liquido. Obs.: o programa deve informar o salario bruto e salario
liquido do professor. */

#include <stdio.h>

int main()
{
    
    int horasTrabalhadasMes, descontoINSS;
    float valorHorasAula, salarioBruto, salarioLiquido;
    puts("Valor da hora aula: ");
    scanf("%f", &valorHorasAula);
    puts("Numero de horas trabalhadas no mes: ");
    scanf("%d", &horasTrabalhadasMes);
    puts("Percentual de desconto do INSS: ");
    scanf("%d",&descontoINSS);
    salarioBruto = ((float) horasTrabalhadasMes * valorHorasAula);
    printf("Salario bruto: R$%.2f\n",salarioBruto);
    salarioLiquido = salarioBruto - (((float) horasTrabalhadasMes * valorHorasAula) * descontoINSS/100);
    printf("Salario liquido: R$%.2f.",salarioLiquido);
    return 0;
}