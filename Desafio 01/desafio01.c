/* DESAFIO 01: */

#include <stdio.h>
#include <stdlib.h>

int binario(int x){
    return (x == 0) ? 0: (binario (x / 2) * 10) | (x % 2); //Transforma número decimal em binario.
}

int main()
{
    unsigned char armario = 0; //00000000
    int opcao, j, libera, numArmario[8] = {1,2,3,4,5,6,7,8};
    
    do{
        puts("Digite uma das tres opcoes:\n[1]Ocupar armario.\n[2]Liberar armario.\n[3]Sair.");
        scanf("%d",&opcao);
        
        if(opcao == 1){
            
            do{
                j = rand() % 8; //Gera valores inteiros aleatoriamente de 1 a 8;
            }while(numArmario[j] == 0);
            
            printf("%d° armario agora esta ocupado.",numArmario[j]);
            switch(numArmario[j]){
                case 1:
                    armario = armario | 128; //10000000
                    break;
                case 2:
                    armario = armario | 64; //01000000
                    break;
                case 3:
                    armario = armario | 32; //00100000
                    break;
                case 4:
                    armario = armario | 16; //00010000
                    break;
                case 5:
                    armario = armario | 8; //00001000
                    break;
                case 6:
                    armario = armario | 4; //00000100
                    break;
                case 7:
                    armario = armario | 2; //00000010
                    break;
                case 8:
                    armario = armario | 1; //00000001
                    break;
            }
            numArmario[j] = 0; //Garante que os números não iram se repetir pois depois de escolhido transforma aquele valor em zero.
            printf("Armarios: %d\n",binario(armario));
            continue;
        }
        else if(opcao == 2){
            printf("Qual armario deve ser desocupado? %d ",binario(armario));
            scanf("%d",&libera);
            switch(libera){
                case 1:
                    armario = armario & ~128; //10000000
                    break;
                case 2:
                    armario = armario & ~64; //01000000
                    break;
                case 3:
                    armario = armario & ~32; //00100000
                    break;
                case 4:
                    armario = armario & ~16; //00010000
                    break;
                case 5:
                    armario = armario & ~8; //00001000
                    break;
                case 6:
                    armario = armario & ~4; //00000100
                    break;
                case 7:
                    armario = armario & ~2; //00000010
                    break;
                case 8:
                    armario = armario & ~1; //00000001
                    break;
            }
            printf("Armarios: %d\n",binario(armario));
            continue;
        }
    }while(opcao != 3);
    puts("Fim do programa.");
    
    return 0;
}