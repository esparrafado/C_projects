#include<stdio.h>
#define TAM 100

int main(){
    char stringa[TAM];
    char stringb[TAM];
    
    puts("Escreva uma frase: ");
    scanf(" %s", stringa);

    puts("Escreva outra frase: ");
    scanf(" %s", stringb);

    for(int i = 0; i < TAM; i++){
        if(stringa[i] == '\0'){
            for(int k = 0; k < TAM; k++){
                puts("a");
                if(i + k < TAM){
                    stringa[i + k] = stringb[k];
                }
            }
        break;
        }
    }

    printf("As duas strings juntas \n%s", stringa);
}