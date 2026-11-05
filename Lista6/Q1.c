#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define AMP 100

void imprimirvetor(const int * const, const unsigned int);
void preenchervetor(int *, const unsigned int);

int main(){
    int tamanho;

    puts("Insira o tamanho do vetor");
    scanf("%i", &tamanho);

    int *vetor = malloc(tamanho * sizeof(int));

    preenchervetor(vetor, tamanho);
    imprimirvetor(vetor, tamanho);

    for(int i = 0; i < tamanho; i++){
        if(!(*(vetor + i) % 2)){
            printf("\n[%p] = %d", vetor + i, *(vetor + i));
            break;
        }
    }
}

void preenchervetor(int * const vetor, const unsigned int tamanho){
    srand(time(NULL));
    for(int i = 0; i < tamanho; i++){
        *(vetor + i) = rand() % 100 + 1;
    }
}

void imprimirvetor(const int * const vetor, const unsigned int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("[%p] = %d\n", vetor + i, *(vetor + i));
    }
}
