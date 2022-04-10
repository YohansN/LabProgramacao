/* 6. Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal
atraves da seguinte formula:
para homens: 72.7 * altura - 58
para mulheres: 62.1 * altura - 44.7 */

#include <stdio.h>

int main() {
char sexo;
float altura, peso;
printf("Qual seu sexo? M para masculino - F para feminino \n");
scanf("%c", &sexo);
printf("Qual a sua altura? \n");
scanf("%f", &altura);
if(sexo == 'm'){
peso = 72.7 * altura - 58;
}
else if(sexo == 'f'){
peso = 62.1 * altura - 44.7;
}
printf("O seu peso ideal deve ser: %.2f kg", peso);
return 0;
}