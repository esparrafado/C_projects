#include<stdio.h>

int main(){
    float s = 50.25;
    float sf;
    unsigned char d;

    puts("Quantos dias o funcionario trabalhou?");
    scanf("%hhu", &d);

    if(d < 10){
        sf = d*s; 
    } else if(d <= 20){
        sf = (d*s) * 1.2;
    } else {
        sf = (d*s) * 1.3;
    }

    sf = sf - (sf * 0.1);

    printf("O salario final deste funcionario e: %f", sf);
}