/* 1. Implemente um programa que tenha como entrada um numero (1-7) que corresponde a um dos dias
da semana e imprima na tela o nome do dia correspondente (domingo, segunda, terca, quarta, quinta,
sexta, sabado). Se o numero lido nao estiver no intervalo 1-7, imprima: “Numero de dia nao valido”.
O programa deve permanecer executando ate que o usuario tecle o numero 0. 
(Utilize obrigatoriamente teste no incicio). */

#include <stdio.h>
int main()
{
    int diaSemana;
    
    while(diaSemana){
        
        puts("Digite um valor de 1 a 7: ");
        scanf("%d",&diaSemana);
        
        switch(diaSemana){
            case 1:
                puts("Domingo\n");
                break;
            case 2:
                puts("Segunda-Feira\n");
                break;
            case 3:
                puts("Terca-feira\n");
                break;
            case 4:
                puts("Quarta-feira\n");
                break;
            case 5:
                puts("Quinta-feira\n");
                break;
            case 6:
                puts("Sexta-feira\n");
                break;
            case 7:
                puts("Sabado\n");
                break;
            default:
                puts("Numero de dia nao valido.\n");
        }
    }
    puts("Fim do programa.");
    return 0;
}