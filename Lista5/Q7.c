#include<stdio.h>
#define TAM 100

int main(){
    char stringa[TAM];
    char stringb[TAM];
    char *psa = stringa;
    char *psb = stringb;

    puts("Digite uma frase: ");
    fgets(psa, sizeof(psa), stdin);

    puts("Digite outra frase: ");
    fgets(psb, sizeof(psb), stdin);

    for(int k = 0; k < TAM; k++){
        if(*(psa + k) == '\n'){
            for(int i = 0; i < TAM; i++){
                *(psa + k) = *(psb + i);
                k++;
            }    
        }
    }

    printf("%s", psa);
}