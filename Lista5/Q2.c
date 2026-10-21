#include<stdio.h>

int main(){
    unsigned char a;
    unsigned char b;
    unsigned char *pa = &a;
    unsigned char *pb = &b;

    puts("Defina um valor para a:");
    scanf("%hhu", pa);

    puts("Defina um valor para b:");
    scanf("%hhu", pb);

    printf("a = [%hhu] %hhu. \nb = [%hhu] %hhu. \n", pa, *pa, pb, *pb);

    *pa = *pa ^ *pb;
    *pb = *pa ^ *pb;
    *pa = *pa ^ *pb;

    printf("a = [%hhu] %hhu. \nb = [%hhu] %hhu. \n", pa, *pa, pb, *pb);
}