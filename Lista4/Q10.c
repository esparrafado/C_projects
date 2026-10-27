#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 3

int main(){
    srand(time(NULL));
    int matriz[TAM][TAM];
    int q;
    char have = 0;

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            matriz[i][j] = (rand() % 100) + 1;
        }
    }

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d, ", matriz[i][j]);
        }
        puts("\n");
    }
 
    printf("Procure um numero dentro da matriz ");
    scanf("%d", &q);

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if(q == matriz[i][j]){
                printf("%d esta presente dentro da matriz", q);
                have = 1;
                break;
            }
        }
    }

    if(have == 0){
        printf("%d esta nao presente dentro da matriz", q);
    }
}