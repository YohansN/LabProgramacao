/* 3. Escreva um programa em C que gere um vetor com numeros aleatorios e calcule sua media.
Organize uma Estrutura com as seguintes informacoes:
ponteiro para a matriz, quantidade de elementos e a media. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Estrutura{
    int *pMatriz;
    int qtdElementos;
    float media;
};

int main() {
    struct Estrutura infos;
    float somatorio = 0;
    
    puts("Informe a quantidade de elementos no vetor:");
    scanf("%d",&infos.qtdElementos);
    infos.qtdElementos = infos.qtdElementos;
    
    infos.pMatriz = malloc(infos.qtdElementos * sizeof(int));
	if (!infos.pMatriz){
		exit(1);
	}
    
    srand(time(NULL));
    for(int i = 0 ; i < infos.qtdElementos; i++){
        *(infos.pMatriz + i) = (float) (rand() % 10 );
		somatorio += *(infos.pMatriz + i);
    }
    
    infos.media = somatorio / infos.qtdElementos;
    
    printf("Endereco Ponteiro p/ Matriz:[%p] \nQuantidade de elementos: %d\n", infos.pMatriz, infos.qtdElementos);
    for(int i = 0; i < infos.qtdElementos; i++){
        printf(" %d ",infos.pMatriz[i]);
    }
    printf("\nMedia: %.2f",infos.media);
    return 0;
}