#include<stdio.h>

int main(){
    float t, et, etf;
    unsigned int eti, p;

    puts("Diga o valor do produto: ");
    scanf("%f", &t);

    eti = t;
    p = (eti - (eti % 3)) / 3;
    etf = p + t - eti + (eti % 3);
    
    printf("O valor de entrada e: %f. \nO valor de cada prestacao e: %i", etf, p);
}