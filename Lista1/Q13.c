#include<stdio.h>

int main(){
    float c, f;

    puts("Defina a temperatura em graus Celsius");
    scanf("%f", &c);

    f = ((9 * c) + 160) / 5;

    printf("Essa temperatura em Fahrenheit e: %f", f);
}