#include<stdio.h>

int main(){
    char string[100];
    char stringc[100];
    char *pstring = string;
    char *pstringc = stringc;

    puts("Escreva uma frase");
    fgets(string, sizeof(string), stdin);

    printf("[%p] = %s \n", (void *)pstring, string);

    while(*pstring != '\0'){
        *pstringc = *pstring;
        
        pstring++;
        pstringc++;
    }

     *pstringc = '\0';

    printf("[%p] = %s", (void *)pstringc, stringc);
}