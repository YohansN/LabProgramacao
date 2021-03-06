/* 26. Escreva um programa que imprima uma tabela dos equivalentes binario, octal e hexadecimal dos
numeros decimais no intervalo de 1 a 256. */

#include <stdio.h>

int binario(int x){
    return (x == 0) ? 0: (binario (x / 2) * 10) | (x % 2);
}

int main(){
    
    int i;
    
    for(i = 1; i <= 156; i++){
        printf("Numero: %d | Binario: %d | Octal: %o | hexadecimal: %x\n",i, binario(i), i, i);   
    }
    
    return 0;
}