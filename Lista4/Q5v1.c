#include<stdio.h>
#define TAM 100

int main(){
    char stringa[TAM];
    char stringb[TAM];
    
    puts("Escreva uma frase: ");
    fgets(stringa, sizeof(stinga), stdin);

    puts("Escreva outra frase: ");
    fgets(stringb, sizeof(stringb), stdin);

    for(int i = 0; i < TAM; i++){
        if(stringa[i] == '\0'){
            for(int k = 0; k < TAM; k++){
                if(i + k < TAM){
                    stringa[i + k] = stringb[k];
                }
            }
        break;
        }
    }

    printf("As duas strings juntas \n%s", stringa);
}