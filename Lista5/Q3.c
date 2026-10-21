#include<stdio.h>
#define LOOP 5

int main(){
    int n;
    int s;
    int *pn = &n;
    int *ps = &s;

    puts("Digite um número:");
    scanf("%i", pn);

    *pn = *ps;

    for(int i = 0; i<LOOP; i++){
        puts("Digite um número:");
        scanf("%i", pn);

        if(*pn < *ps){
            *ps = *pn;
        }

    }

    printf("O menor valor digitado foi %i", *ps);
}