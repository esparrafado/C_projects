#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define AMP 5

int main(){
    srand(time(NULL));
    int f[AMP] = {0};
    unsigned int n;
    int *v = 0;
    int *pf = f;

    puts("Digite quantos valores o vetor tera: ");
    scanf("%u", &n);

    v = malloc(n*sizeof(int));

    puts("Vetor gerado");
    for(int i = 0; i<n; i++){
        *(v + i)= rand() % AMP;
        printf("[%p] = %d \n", v + i, *(v + i));
    }

    for(int i = 0; i<n; i++){
        *(pf + *(v + i)) += 1;
    }

    puts("Frequencia dos dados");
    for(int i = 0; i<n; i++){
        printf("[%p] = %d \n", pf + i, *(pf + i));
    }

}