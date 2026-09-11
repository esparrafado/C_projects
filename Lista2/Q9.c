#include<stdio.h>

int main(){
    unsigned short int t1 = 0;
    unsigned short int t2 = 1;
    unsigned short int t3;

    for(int i = 0; i < 20; i++){
        printf("%hu\n", t1);
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;

    }
}