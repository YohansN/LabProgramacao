/* 8. Uma loja vende seus produtos no sistema entrada mais duas prestacoes, sendo a entrada maior do que
ou igual as duas prestacoes;estas devem ser iguais, inteiras e as maiores possiveis.
Por exemplo, se o valor da mercadoria for R$ 270,00, a entrada e as duas prestacoes sao iguais a R$ 90,00;
se o valor da mercadoria for R$ 302,75, a entrada  eh de R$ 102,75 e as duas prestacoes sao iguais a R$ 100,00.
Escreva um programa que receba o valor da mercadoria e forneca o valor da entrada e das duas prestacoes, de
acordo com as regras acima. */

#include <stdio.h>

int main(){
    
    float valor, entrada, prestacoes;
    
    puts("Digite o valor do produto: R$");
    scanf("%f",&valor);
    
    if((int)valor % 3 == 0){
        entrada = valor / 3;
        prestacoes = valor / 3;
    }
    else{
        //Codigo incompleto
    }
    printf("Entrada: R$%.2f\nPrestacoes: 2x R$%.2f",entrada, prestacoes);
    
    return 0;
}