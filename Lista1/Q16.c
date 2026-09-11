#include<stdio.h>
#include<math.h>

int main(){
    int x;

    puts("Defina um valor para x: ");
    scanf("%i", &x);

    x = abs(x);

    printf("|x| = %i", x);
}