#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 100

int main(){
    srand(time(NULL));

    unsigned char intervalo;
    int v[TAM];

    puts("Defina o intervalo de numeros que devera ser preenchido o vetor");
    scanf("%hhu", &intervalo);

    puts("Vetor desordenado");
    for(int i = 0; i < TAM; i++){
        v[i] = rand() % intervalo;
        printf("[%d] = %d\n", &v[i], v[i]);
    }

    for(int i = 0; i < TAM; i++){

        for(int k = i; k < TAM; k++){

            if(v[i] > v[k]){
                v[k] = v[i] ^ v[k];
                v[i] = v[i] ^ v[k];
                v[k] = v[i] ^ v[k];
            }
        }
    }

    puts("Vetor ordenado");
    for(int i = 0; i < TAM; i++){
        printf("[%d] = %d\n", &v[i], v[i]);
    }
    
}