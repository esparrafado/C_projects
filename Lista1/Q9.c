#include<stdio.h>

int main(){
    int c, h, l, v;

    puts("Informe o comprimento do objeto retangular: ");
    scanf("%i", &c);

    puts("Informe a altura do objeto retangular: ");
    scanf("%i", &h);

    puts("Informe a largura do objeto retangular: ");
    scanf("%i", &l);

    v = c * h * l;

    printf("O volume do objeto retangular e: %i", v);
}