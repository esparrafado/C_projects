#include<stdio.h>

int main(){
    float x, y, z;

    puts("Defina o valor do numerador.");
    scanf("%f", &x);

    puts("Defina o valor do denominador.");
    scanf("%f", &y);

    if(y != 0){
        z = x / y;
        printf("O resulatado da divisao e: %f", z);
    } else {
        puts("Impossivel efetuar a divisao, denominador igual a zero.");
    }
}