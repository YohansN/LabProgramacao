/* 1. Diga a ordem de calculo dos operadores em cada uma das instrucoes em C a seguir e mostre o valor
de x depois que cada instrucao for executada.
• x = 7 + 3*6/2-1;
• x = 2%2 + 2*2-2/2;
• x = (3 * 9 * (3 + (9*3/ (3) ) ) ); */

#include <stdio.h>

int main()
{
    //Ordem: Resto -> multiplicacao -> divisão -> soma ou subtração; OBS: Os parenteses podem mudar essa ordem. 
    int x;
    x = 7 + 3*6/2-1;
    printf("%d\n",x);
    x = 3%1 + 2*2-2/2;
    printf("%d\n",x);
    x = (3 * 9 * (3 + (9*3/ (3) ) ) );
    printf("%d\n",x);

    return 0;
}
