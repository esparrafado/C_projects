#include<stdio.h>
#include<stdlib.h>

int main(){
    int aa, ab;
    int pa, pb;
    int va, vb;
    int dist;

    puts("Escreva o valor da area de A e o valor da area de B.");
    scanf("%d", &aa);
    scanf("%d", &ab);
    puts("Escreva o valor do perimetro de A e o valor do perimetro de B.");
    scanf("%d", &pa);
    scanf("%d", &pb);
    puts("Escreva o numero de vertices de A e o numero de vertices de B.");
    scanf("%d", &va);
    scanf("%d", &vb);

    dist = (abs(aa - ab) > abs(pa - pb)) ? abs(aa - ab) : abs(pa - pb);
    dist = (dist > abs(va - vb)) ? dist : abs(va - vb);

    printf("A distancia de Chebyshev destes de A e B e %d.", dist);
   
}