/* 12. Escreva um programa que peça ao usuario para digitar dois numeros, obtenha-os do usuario e imprima
a soma, o produto, a diferenca, o quociente e o resto da divisao dos dois numeros.*/
#include <stdio.h>

int main()
{
    int n1, n2, soma, mult, resto;
    float divs;
    printf("Digite um valor: ");
    scanf("%d",&n1);
    printf("Digite outro valor: ");
    scanf("%d",&n2);
    soma = n1 + n2;
    mult = n1 * n2;
    divs = (float) n1 / n2;
    resto = n1 % n2;
    printf("Soma: %d \nProduto: %d \nQuociente: %.2f \nResto da divisao: %.2f", soma, mult, divs, (float)resto);
    return 0;
}