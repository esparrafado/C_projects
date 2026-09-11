#include<stdio.h>

int main(){
    unsigned int x;

    puts("Informe um numero para calcular o fatorial: ");
    scanf("%u", &x);

    for(unsigned int i = x - 1; i != 0; i--){
        x *= i;
    }

    printf("O fatorial de x e %u", x);
}