#include<stdio.h>

int main(){
    float s, sb, sl, inss;
    unsigned char d;

    puts("Quantos dias o professor trabalhou?");
    scanf("%hhu", &d);

    puts("Quanto e a diaria do professor:");
    scanf("%f", &s);

    puts("Quanto e o percentual de desconto do INSS");
    scanf("%f", &inss);

    sb = d*s;
    sl = sb - (sb * (inss / 100));
    
    printf("O salario liquido do professor e %f.\nO salario bruto do professor e %f.", sl, sb);
}