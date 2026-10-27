#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define TAM 3

int main(){
    srand(time(NULL));
    int v[TAM];
    float media = 0;

    for(int i = 0; i < TAM; i++){
        v[i] = rand() % 20;
        media += v[i];
    }

    media = media / TAM;

    printf("A media aritmetica desse vetor e %f", media);

}