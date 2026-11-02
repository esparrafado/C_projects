#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define AMP 7

int main(){
    srand(time(NULL));
    int matriz[AMP][AMP];
    int x[AMP];
    int y[AMP];

    int *pmatriz = &matriz[0][0];
    int *px = x;
    int *py = y;

    for(int i = 0; i < AMP * AMP; i++){
        *(pmatriz + i) = 0;
    }

    for(int i = 0; i < AMP; i++){
        *(px + i) = rand() % 7;
        *(py + i) = rand() % 7;
    }

    puts("Matriz x");
    for(int i = 0; i < AMP; i++){
        printf("[%d] = %d\n", i, *(px + i));
       
    }

    puts("Matriz y");
    for(int i = 0; i < AMP; i++){
        printf("[%d] = %d\n", i, *(py + i));
    }

    for(int i = 0; i < AMP; i++){
        *(pmatriz + (*(py + i) * AMP) + *(px + i)) += 1;
    }

    for(int i = 0; i < AMP; i++){
        for(int k = 0; k < AMP; k++){
            printf("%d, ", *(pmatriz + (i * AMP) + k));
        }
        puts("\n");
    }
}