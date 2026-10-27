#include<stdio.h>
#include<string.h>
#define TAM 100

int main(){
    char stringa[TAM];
    char stringb[TAM];
    char *pstringa = stringa;
    char *pstringb = stringb;
    
    puts("Escreva uma frase: ");
    fgets(stringa, sizeof(stringa), stdin);

    puts("Escreva outra frase: ");
    fgets(stringb, sizeof(stringb), stdin);

    strcat(pstringa, pstringb);

    printf("As duas strings juntas \n%s", stringa);
}