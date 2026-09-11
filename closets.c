#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include <windows.h>

int random_closet(){
    char MAX_rand = 8;
    unsigned char closet;
    srand(time(NULL));
    char random = rand() % MAX_rand;
    return random;
}
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char closet;
    char random;
    char sair = 1;
    unsigned char closets = 0;
    char choice;

    while(sair){
        puts("Boas vindas, escolha uma das 3 opções: \n 1. Oculpar um armario aleatório. \n 2. Deixar um armario aleatório. \n 3. Sair.");
            scanf("%d", &choice);
            unsigned char atual = closets;
            switch (choice){
                case 1:
                
                if(closets == 255){
                    puts("Nenhum armario disponivel, tente mais tarde.");
                    break;
                } else {
                    while(atual == closets){
                        random = random_closet();
                        closet = (int)pow(2, random);
                        closets = closets | closet;
                        unsigned char atual = closets;
                    }
                    printf("Armario %d oculpado com sucesso.", random + 1);
                }

                case 2:

                if(closets == 0){
                    puts("Nenhum armario oculpado.");
                    break;
                } else {
                    while(atual == closets){
                        random = random_closet();
                        closet = (int)pow(2, random);
                        closets = closets & ~closet;
                        unsigned char atual = closets;
                    }
                    printf("Armario %d desoculpado com sucesso.", random + 1);
                }

                case 3:
                    sair = 0;
                    break;
                default:
                    puts("Opção invalida, tente novamente.");
                    break;
            }
    }

    return 0;
}