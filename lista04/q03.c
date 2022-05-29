/* 3. Escreva um programa que solicite iterativamente um numero do usuario e imprima sempre o menor
valor fornecido. Crie um cirterio para finalizacao do programa. Utilize ponteiros. */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n = 1, menorValor;
    int *pn = NULL, *pmenorValor = NULL;
    bool primeiraVez = true;
    
    pmenorValor = &menorValor;
    
    while(n){
        
        puts("Digite 0 (zero) para finalizar o programa.\nDigite um numero: ");
        scanf("%d",&n);
        pn = &n;
        
        if (primeiraVez){
            menorValor = *pn;
            primeiraVez = false;
        }
        
        if(*pn <= *pmenorValor){
            menorValor = *pn;
        }
        
        printf("O menor valor digitado ate agora eh %d endereco [%p]\n",menorValor, pmenorValor);
    }
    puts("Fim do programa.");

    return 0;
}