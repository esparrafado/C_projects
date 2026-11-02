#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 15

int main(){
    srand(time(NULL));
    int v[TAM];
    int *pv = v;

    puts("Vetor desordenado");
    for(int i = 0; i < TAM; i++){
        *(pv + i) = rand() % 100 + 1;
        printf("[%p] = %d\n", pv + i, *(pv + i));
    }

    for(int i = 0; i < TAM; i++){

        for(int k = 0; k < (TAM - 1); k++){

            if(*(pv + k) > *(pv + k + 1)){
                *(pv + k + 1) = *(pv + k) ^ *(pv + k + 1);
                *(pv + k)     = *(pv + k) ^ *(pv + k + 1);
                *(pv + k + 1) = *(pv + k) ^ *(pv + k + 1);
            }
        }
    }

    puts("Vetor ordenado");
    for(int i = 0; i < TAM; i++){
        printf("[%p] = %d\n", pv + i, *(pv + i));
    }
}