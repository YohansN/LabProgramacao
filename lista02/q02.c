/* 2. refaca o programa da Questao 1, utilizando a estrutura de repeticao com teste no final. */

#include <stdio.h>
int main()
{
    int diaSemana;
    
    do{
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
    }while(diaSemana);

    puts("Fim do programa.");
    return 0;
}