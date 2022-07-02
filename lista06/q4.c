/* 4. Escreva um programa em C que modifique a questao 1 para conter um array com 3 alunos.
Escreva uma funcao para calcular a media dos alunos. */

#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    float nota1;
    float nota2;
    float media;
}arrayAluno[3];

float calcularMedia(float nota1, float nota2, int i){
    return arrayAluno[i].media = (nota1 + nota2) / 2;
}

int main(){
    
    for(int i = 0; i < 3; i++){
        printf("informe o valor da 1º nota do %dº aluno: ", i+1);
        scanf("%f",&arrayAluno[i].nota1);
        printf("Informe o valor da 2º nota do %dº aluno: ", i+1);
        scanf("%f",&arrayAluno[i].nota2);
        calcularMedia(arrayAluno[i].nota1, arrayAluno[i].nota2, i);
    }
    
    for(int i = 0; i < 3; i++){
        printf("A media do %dº aluno eh: %.1f\n",i+1 ,arrayAluno[i].media);    
    }
    
    return 0;
}