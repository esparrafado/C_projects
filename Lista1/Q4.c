#include<stdio.h>

int main(){
    float conta;

    puts("Insira o valor da conta: ");
    scanf("%f", &conta);

    printf("O valor da conta mais a taxa do garcom e: %f", conta + (conta/10));
}