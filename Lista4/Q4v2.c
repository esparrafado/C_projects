#include<stdio.h>
#include <string.h>
#define TAM 100

int main(){
    char stringa[TAM];
    char stringb[TAM];
    char *pstringa = stringa;
    char *pstringb = stringb;
    char equal = 1;

    for (int i = 0; i < TAM; i++) {
        stringa[i] = '\0';
        stringb[i] = '\0';
    }

    puts("Escreva uma frase: ");
    scanf(" %s", stringa);

    puts("Escreva outra frase: ");
    scanf(" %s", stringb);

    if(strcmp(pstringa, pstringb)){
        puts("As duas frases são diferentes");
    } else {
        puts("As duas frases são iguais");
    }
}