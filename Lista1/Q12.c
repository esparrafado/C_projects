#include<stdio.h>

int main(){
    unsigned char a, b;

    puts("Defina um valor para a variavel A: ");
    scanf("%hhu", &a);

    puts("Defina um valor para a variavel B: ");
    scanf("%hhu", &b);

    a = a ^ b; 
    b = b ^ a;
    a = a ^ b;
    printf("A = %hhu \nB = %hhu", a, b);
}