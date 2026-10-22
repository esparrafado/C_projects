#include<stdio.h>
#define TAM 15

int main(){
    float vetor[TAM];
    float maior, menor;

    puts("Insira um valor para colocar no vetor: ");
    scanf("%f", &vetor[0]);
    maior = vetor[0];
    menor = vetor[0];

    for(int i = 1; i < TAM; i++){
        puts("Insira um valor para colocar no vetor: ");
        scanf("%f", &vetor[i]);

        if(vetor[i] > maior){
            maior = vetor[i];
        }

        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    printf("A soma do menor número fornecido com o maior número fornecido: %f", maior + menor);

}