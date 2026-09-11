#include<stdio.h>

int main(){
    int maior, menor, x;

    puts("Digite um numero qualquer.");
    scanf("%i", &x);

    maior = x;
    menor = x;

    do{
        puts("Digite outro numero qualquer, caso queira encerrar o programa digite 0.");
        scanf("%i", &x);

        if(x > maior){
            maior = x;
        };

        if(x < menor){
            menor = x;
        }

        printf("Menor: %i \nMaior: %i\n", menor, maior);

        if(x == 0){
            break;
        }
    } while(1);
}