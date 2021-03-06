/* 6. Escreva um programa que transforme o computador numa urna eletronica para eleicao para presidente
de um certo pais, as quais concorrem os candidatos 5-Paulo e 7-Renata.
Cada voto deve ser dado pelo numero do candidato, permitindo-se ainda o voto 0 para voto em branco.
Qualquer voto diferente dos ja citados eh considerado nulo;
em qualquer situacao, o eleitor deve ser consultado quanto a confirmacao do seu voto.
No final da eleicao o programa deve emitir um relatorio contendo as porcentagens de
votacao de cada candidato, votos em branco, votos nulos e o candidato eleito. 
Obs.: O codigo para finalizar a urna (votacao) eh o usuario digitar algum numero negativo. */

#include <stdio.h>
int main()
{
    int voto, paulo = 0, renata = 0, branco = 0, nulo = 0, totalVotos = 0;
    char confirmar;
    
    while(voto >= 0){
        puts("Escolha seu candidato:\nPaulo [5]\nRenata [7]\nBranco[0]");
        scanf("%d",&voto);
        
        switch(voto){
            case 0:
                puts("Confirmar voto em branco:\nSim[s]\nNao[n]");
                scanf(" %c",&confirmar);
                if(confirmar == 's'){
                    branco++;
                    puts("Voto confirmado!\n");
                    totalVotos++;
                }
                else{
                    puts("Voto cancelado.\n");
                }
                break;
            
            case 5:
                puts("Confirmar voto em Paulo:\nSim[s]\nNao[n]");
                scanf(" %c",&confirmar);
                if(confirmar == 's'){
                    paulo++;   
                    puts("Voto confirmado!\n");
                    totalVotos++;
                }
                else{
                    puts("Voto cancelado.\n");
                }
                break;
            
            case 7:
                puts("Confirmar voto em Renata:\nSim[s]\nNao[n]");
                scanf(" %c",&confirmar);
                if(confirmar == 's'){
                    renata++;
                    puts("Voto confirmado!\n");
                    totalVotos++;
                }
                else{
                    puts("Voto cancelado.\n");
                }
                break;
            
            default:
                if(voto > 0){
                    puts("Confirmar voto nulo:\nSim[s]\nNao[n]");
                    scanf(" %c",&confirmar);
                    if(confirmar == 's'){
                        nulo++;
                        puts("Voto confirmado!\n");
                        break;
                    }
                else{
                    puts("Voto cancelado.\n");
                    break;
                    }
                }
                else{
                    break;
                }
        }
    }
    
    printf("\nbranco: %d - Paulo: %d - Renata: %d - Nulo: %d\n",branco,paulo,renata,nulo);
    
    if(paulo > renata){
        printf("Paulo foi o candidato eleito com %.2f%% dos votos",(float)paulo/totalVotos);
    }
    else if(renata > paulo){
        printf("Renata foi a candidata eleita com %.2f%% dos votos",(float)renata/totalVotos);
    }
    else{
        puts("Ocorreu um empate.");
    }
    
    return 0;
}