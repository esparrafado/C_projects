#include<stdio.h>

int main(){
    unsigned int x;

    puts("Defina um valor para x: ");
    scanf("%u", &x);

    printf("O valor de x em hexadecimal e: %x\n", x);
    printf("O valor de x em octal e: %o", x);
}