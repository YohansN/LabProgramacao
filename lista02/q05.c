/* 5. Fazer um programa que receba um valor N no teclado e determine o maior e o menor termo fornecido.
A condicao de termino do programa eh quando o usuario digitar zero.? */

#include <stdio.h>
#include <stdbool.h>
int main()
{
    float n, maiorValor, menorValor;
    bool primeiraLeitura = false;
    
    while(n){
        puts("Digite um valor: ");
        scanf("%f",&n);
        
        if(!primeiraLeitura){
            maiorValor = n;
            menorValor = n;
            primeiraLeitura = true;
        }
        
        maiorValor = (maiorValor < n) ? n : maiorValor;
        menorValor = (menorValor > n) ? n : menorValor;
        
        printf("Maior valor: %.0f\nMenor valor: %.0f\n",maiorValor,menorValor);
    }
    puts("Fim do programa.");
    
    return 0;
}