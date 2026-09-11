#include<stdio.h>

int main(){
    unsigned int h, m, s;

    puts("Informe o tempo que passou em hora:minuto:segundo");
    scanf("%u:%u:%u", &h, &m, &s);

    s = (h * 3600) + (m * 60) + s;

    printf("E o equivalente a: %u", s);
}