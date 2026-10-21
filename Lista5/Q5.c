#include<stdio.h>

int main(){
    int tamanho = 0;
    char string[100];
    int *ptamanho = &tamanho;
    char *pstring = string;

    puts("Escreva uma frase.");
    fgets(string, sizeof(string), stdin);

    for(int i = 0; ;i++){
        if(*(pstring + i) == '\n'){
            break;
        }

        *ptamanho += 1;

    }

    printf("Essa string tem %i", *ptamanho);
}