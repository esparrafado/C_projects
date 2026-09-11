#include<stdio.h>

int main(){
    int x, y;

    puts("Defina um valor para x: ");
    scanf("%i", &x);

    puts("Defina um valor para y: ");
    scanf("%i", &y);

    printf("O resultado da soma destes dois numeros e %i", x + y);
    printf("O resultado da diferença destes dois numeros e %i", x - y);
    printf("O resultado do produto destes dois numeros e %i", x * y);
    printf("O quociente inteiro destes numeros e %i", x / y);
    printf("O resto da divisao destes numeros e %i", x % y);
}