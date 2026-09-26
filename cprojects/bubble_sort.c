#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 15

int main(){
    srand(time(NULL));
    int v[TAM];

    puts("Vetor desordenado");
    for(int i = 0; i < TAM; i++){
        v[i] = rand() % 100 + 1;
        printf("[%d] = %d\n", &v[i], v[i]);
    }

    for(int i = 0; i < TAM; i++){

        for(int k = 0; k < (TAM - 1); k++){

            if(v[k] > v[k + 1]){
                v[k + 1] = v[k] ^ v[k + 1];
                v[k] = v[k] ^ v[k+1];
                v[k + 1] = v[k] ^ v[k + 1];
            }
        }
    }

    puts("Vetor ordenado");
    for(int i = 0; i < TAM; i++){
        printf("[%d] = %d\n", &v[i], v[i]);
    }
}