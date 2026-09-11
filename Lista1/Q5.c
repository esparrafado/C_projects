#include<stdio.h>

int main(){
    float h, p;
    unsigned char s;

    puts("Informe o seu sexo.\n 1. Homem.\n 2. Mulher.");
    scanf("%hhu", &s);

    puts("Informe a sua altura.");
    scanf("%f", &h);

    if(s == 1){
        p = 72.7 * h - 58;
        printf("O seu peso ideal deve ser %.2fkg.", p);
    } else if(s == 2){
        p = 62.1 * h - 44.7;
        printf("O seu peso ideal deve ser %.2fkg.", p);
    } else {
        puts("Opcoo de sexo invalida");
    }

}