#include<stdio.h>
#define TAM 100

int main(){
    char stringa[TAM];
    char stringb[TAM];
    char equal = 1;

    for (int i = 0; i < TAM; i++) {
        stringa[i] = '\0';
        stringb[i] = '\0';
    }

    puts("Escreva uma frase: ");
    fgets(stringa, sizeof(stringa), stdin);

    puts("Escreva outra frase: ");
    fgets(stringb, sizeof(stringb), stdin);

    for(int i = 0; i < TAM; i++){
        if(stringa[i] != stringb[i]){
            printf("stringa =  %c \n", stringa[i]);
            printf("stringb =  %c \n", stringb[i]);
            equal = 0;
        }
    }

    if(equal == 1){
        puts("As duas frases são iguais");
    } else {
        puts("As duas frases são diferentes");
    }
}