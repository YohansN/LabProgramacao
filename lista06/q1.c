/* 1. Escreva um programa em C que utilize uma Estrutura aluno para conter duas notas, lidas do usuario, e sua media. */

#include <stdio.h>

struct Aluno {
    float nota1;
    float nota2;
    float media;
};

int main(){
    struct Aluno aluno1;
    puts("Digite o valor da nota 1:");
    scanf("%f",&aluno1.nota1);
    puts("Digite o valor da nota 2:");
    scanf("%f",&aluno1.nota2);
    aluno1.media = (aluno1.nota1 + aluno1.nota2) / 2;
    
    printf("A media do aluno eh: %.2f",aluno1.media);
    return 0;
}