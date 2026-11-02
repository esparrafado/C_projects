#include<stdio.h>
#define TAM 100

int main(){
    char str[TAM];
    char c;
    char *pstr = str;
    char *pc = &c;

    puts("Digite uma frase: ");
    fgets(pstr, sizeof(pstr), stdin);

    puts("Escreva um digito para procurar na frase: ");
    scanf(" %c", pc);

    int have = 0;
    for(int i = 0; i < TAM; i++){
        if(*(pstr + i) == *pc){
            have = 1;
            break;
        }
    }

    if(have){
        printf("O caractere %c esta contido na frase", *pc);
    } else {
        printf("O caractere %c nao esta contido na frase", *pc);
    }
}