/* 27. Escreva um programa que receba varios numeros inteiros (em uma estrutura de laco) e apresente o
produto do maior pelo menor numero apresentado. (Obs.: Nao utilize vetores.) 
A condicao de saida do laco eh o usuario digitar um numero negativo e par. */

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n = 1, maiorValor, menorValor;
    bool primeiraLeitura = false;
    
    while(!((n < 0) && (n % 2 == 0))){
        puts("Digite um valor: ");
        scanf("%d",&n);
        
        if(!primeiraLeitura){
            maiorValor = n;
            menorValor = n;
            primeiraLeitura = true;
        }
        else{
            maiorValor = (maiorValor < n) ? n : maiorValor;
            menorValor = (menorValor > n) ? n : menorValor;
        }
    }
    
    printf("%d / %d = %d\n",maiorValor,menorValor, maiorValor/menorValor);
    
    return 0;
}