#include <stdio.h>

int main(){
    unsigned char a;
    unsigned char b;
    unsigned char r;
    unsigned char *pa = &a;
    unsigned char *pb = &b;
    unsigned char *pr = &r;

    puts("Insira o valor de a.");
    scanf("%hhu", pa);

    puts("Insira o valor de b.");
    scanf("%hhu", pb);

    *pr = *pa + *pb;

    printf("[%hhu] %hhu", pr, *pr);
    
}