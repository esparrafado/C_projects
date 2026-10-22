#include<stdio.h>
#define TAM 100

int main(){
    char string[TAM];
    char tamanho = 0;

    puts("Digite uma frase: ");
    scanf(" %s", string);

    for(int i = 0; i < TAM; i++){
        if(string[i] == '\0'){
            break;
        } else {
            tamanho += 1;
        }
    }

    printf("O tamanho da frase digitada foi %i", tamanho);
}