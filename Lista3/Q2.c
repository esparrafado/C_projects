#include<stdio.h>
#include<stdlib.h>

int main(){
    int aa, ab;
    int pa, pb;
    int va, vb;
    int dista, distb;

    puts("Escreva o valor da area de A e o valor da area de B.");
    scanf("%d", &aa);
    scanf("%d", &ab);
    puts("Escreva o valor do perimetro de A e o valor do perimetro de B.");
    scanf("%d", &pa);
    scanf("%d", &pb);
    puts("Escreva o numero de vertices de A e o numero de vertices de B.");
    scanf("%d", &va);
    scanf("%d", &vb);

    while(1){

        int aX, pX, vX;

        puts("Escreva o valor da area de X.");
        scanf("%d", &aX);
        puts("Escreva o valor do perimetro de X.");
        scanf("%d", &pX);
        puts("Escreva o numero de vertices de X.");
        scanf("%d", &vX);
       

        dista = (abs(aa - aX) > abs(pa - pX)) ? abs(aa - aX) : abs(pa - pX);
        dista = (dista > abs(va - vX)) ? dista : abs(va - vX);

        distb = (abs(ab - aX) > abs(pb - pX)) ? abs(ab - aX) : abs(pb - pX);
        distb = (distb > abs(vb - vX)) ? distb : abs(vb - vX);

        if(dista > distb){
            puts("Classe(B)");
        } else if(distb > dista){
            puts("Classe(A)");
        } else {
            puts("Classe(empate)");
        }

    }
}