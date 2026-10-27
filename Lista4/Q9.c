#include<stdio.h>
#define TAM 3

int main(){
    int matriz[TAM][TAM];

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("Defina o valor da posição [%i][%i]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    puts("Os valores na diagonal principal sao:");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if(i == j){
                printf("Valor armazenado na posição [%i][%i] = %d\n", i, j, matriz[i][j]);
            }
        }
    }

}