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
        *(px + i) = rand() % AMP - 1 ;
        if (*(px + i) <= 3) {
            *(py + i) = *(px + i);

        } else if (*(px + i) <= 5) {
            *(py + i) = *(px + i) - 1;

        } else if (*(px + i) <= 7) {
            *(py + i) = *(px + i) + 1;

        } else if (*(px + i) <= 9) {
            *(py + i) = *(px + i) - 2;

        } else if (*(px + i) <= 10) {
            *(py + i) = *(px + i) + 1;

        } else {
            *(py + i) = *(px + i);
        }
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