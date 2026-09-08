#include<stdio.h>
#include<math.h>

int main(){

    float em = 0;
    int n = 0;

    while(1){
    unsigned char x, xr, q, e;
    n += 1;

    puts("Escreva um valor entre 0 e 255: ");
    scanf("%hhu", &x);

    q = x >> 4;
    xr = q << 4;
    e = abs(x - xr);

    printf("O valor original é: %hhu\n", x);
    printf("O valor quantizado é: %hhu", q);
    printf("O valor reconstruido é: %hhu\n", xr);
    printf("O erro de quantização é: %hhu\n", e);
   
    em = em + e;

    printf("Valor do erro médio de quantização é de: %f", em/n);

    }
}