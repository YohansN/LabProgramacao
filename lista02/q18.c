/* 18. Escrever um programa que calcule e apresente o somatorio do numero de graos de trigo que se pode
obter num tabuleiro de xadrez, obedecendo a seguinte regra: colocar um grao de trigo no primeiro
quadro e nos quadros seguintes o dobro do quadro anterior. Ou seja, no primeiro quadro coloca-se um
grao, no segundo quadro colocam-se dois graos (tendo neste momento tres graos), no terceiro quadro
colocam-se quatro graos (tendo neste momento sete graos), no quarto quadro colocam-se oito graos
(tendo-se entao quinze graos) ate atingir o sexagesimo quarto quadro. */

#include <stdio.h>

int main()
{
    int quadro;
    unsigned long int graos = 1, somatorio = 1;
    
    for(quadro = 2; quadro <= 64; quadro++){
        graos = graos * 2;
        somatorio = somatorio + graos;
    }
    
    printf("Somatorio dos graos: %lu",somatorio);
    
    return 0;
}