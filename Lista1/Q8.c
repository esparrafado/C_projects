#include<stdio.h>

int main(){
    int x;
    puts("Defina um valor para x: ");
    scanf("%i", &x);

    printf("O sucessor de x e %i \nO antecessor de x e %i", x + 1, x - 1);
}