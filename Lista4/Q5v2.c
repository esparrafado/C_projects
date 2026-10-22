#include<stdio.h>
#include<string.h>
#define TAM 100

int main(){
    char stringa[TAM];
    char stringb[TAM];
    char *pstringa = stringa;
    char *pstringb = stringb;
    
    puts("Escreva uma frase: ");
    scanf(" %s", stringa);

    puts("Escreva outra frase: ");
    scanf(" %s", stringb);

    strcat(pstringa, pstringb);

    printf("As duas strings juntas \n%s", stringa);
}