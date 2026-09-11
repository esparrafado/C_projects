#include<stdio.h>
#include<math.h>

int main(){
    int x;

    puts("Defina um valor para x: ");
    scanf("%i", &x);

    x = pow(x, 2);

    printf("O quadrado de x e %i", x);
}