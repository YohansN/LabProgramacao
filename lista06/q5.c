/* 5. Crie uma Estrutura disciplina em que um dos campos corresponde tambem a uma estrutura professor. */

#include <stdio.h>
#include <stdlib.h>

struct Professor{
    char nome[50];
    char email[40];
    float telefone;
};

struct Disciplina{
    struct Professor professor;
    char materia[30];
};

int main(){
    struct Disciplina disciplina;
    
    puts("Cadastro Professor:");
    puts("NOME:");
    fgets(disciplina.professor.nome, 50, stdin);
    
    puts("MATERIA:");
    fgets(disciplina.materia, 30, stdin);
    
    puts("E-MAIL:");
    fgets(disciplina.professor.email, 40, stdin);
   
    puts("TELEFONE:");
    scanf("%f",&disciplina.professor.telefone);

    printf("\nDados Professor: %s\n- Materia: %s\nContatos:\n- E-mail: %s\n- Telefone: %.0f", disciplina.professor.nome, disciplina.materia, disciplina.professor.email, disciplina.professor.telefone);
    return 0;
}