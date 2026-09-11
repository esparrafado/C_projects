#include<stdio.h>

int main(){
    float ct, r, d;
    
    puts("Digite o valor da cotacao do dolar: ");
    scanf("%f", &ct);

    puts("Digite o valor em real: ");
    scanf("%f", &r);

    d = r / ct;

    printf("%.2f reais sao %.2f dolares", r, d);
}