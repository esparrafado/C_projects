#include<stdio.h>
#define TAM 100

int main(){
    char string[TAM];
    char caractere;
    char have = 0;

    puts("Digite uma letra");
    scanf(" %c", &caractere);

    puts("Digite uma frase");
    fgets(string, sizeof(string), stdin);

    for(int i = 0; i < TAM; i++){
        if(string[i] == caractere && string[i] != '\0'){
            have = 1;
            break;
        }

        if(string[i] != '\0'){
            break;
        }
    }

    if(have == 1){
        puts("A frase contém o caractere fornecido");
    } else {
        puts("A frase não contém o caractere fornecido");
    }


}