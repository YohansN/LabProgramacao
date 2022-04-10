/* 19. Escreva um programa que imprima um retangulo, uma elipse, uma seta e um losango como se segue:*/

#include <stdio.h>

int main()
{
    //retangulo:
    char ret_base[9] = "********";
    char ret_lado[9] = "*      *";
    printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",ret_base,ret_lado,ret_lado,ret_lado,ret_lado,ret_lado,ret_lado,ret_lado,ret_base);
    
    //elipse:
    char eli_base[7] = "   ***";
    char eli_lado1[9] = " *     *";
    char eli_lado2[10] = "*       *";
    printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",eli_base,eli_lado1,eli_lado2,eli_lado2,eli_lado2,eli_lado2,eli_lado2,eli_lado1,eli_base);
    
    //seta:
    char triangulo1[4] = "  *";
    char triangulo2[5] = " ***";
    char triangulo3[6] = "*****";
    printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",triangulo1,triangulo2,triangulo3,triangulo1,triangulo1,triangulo1,triangulo1,triangulo1,triangulo1);
    
    //losango:
    char losango1[6] = "    *";
    char losango2[7] = "   * *";
    char losango3[8] = "  *   *";
    char losango4[9] = " *     *";
    char losango5[10] = "*       *";
    printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",losango1,losango2,losango3,losango4,losango5,losango4,losango3,losango2,losango1);
}