/* 3. Escreva um programa que leia um numero inteiro e positivo F e calcule o fatorial deste numero. */

#include <stdio.h>
int main()
{
    int f, total;
    
    puts("Digite um numero inteiro e positivo: ");
    scanf("%d",&f);
    
    total = f;
    while(f != 1){
        total = total * (f - 1);
        f = f - 1;
    }
    
    printf("%d",total);
    return 0;
}