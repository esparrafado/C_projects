#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 10

int main(){
    srand(time(NULL));
    int v[TAM];

    puts("Vetor desordenado");
    for(int i = 0; i < TAM; i++){
        v[i] = rand() % 100 + 1;
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