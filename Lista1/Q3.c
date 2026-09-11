#include<stdio.h>

int main(){
    float x;

    puts("Defina um valor para x: ");
    scanf("%f", &x);

    printf("O triplo desse valor e: %f\n", 3*x);
    printf("O quadrado desse valor e: %f\n", x*x);
    printf("A metade desse valor e: %f", x/2);
 
}