#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define AMP 100

void imprimirvetor(const int * const, const unsigned int);
void preenchervetor(int *, const unsigned int);
void fandl(const int * const, const int ** const, const unsigned int);

int main(){
    int tamanho;
    const int *vetorfl[2];

    puts("Insira o tamanho do vetor");
    scanf("%i", &tamanho);

    int *vetor = malloc(tamanho * sizeof(int));

    preenchervetor(vetor, tamanho);
    fandl(vetor, vetorfl, tamanho);
    imprimirvetor(vetor, tamanho);
    
    printf("[%p] = [%p]\n", vetorfl, *vetorfl);
    printf("[%p] = [%p]", (vetorfl + 1), *(vetorfl + 1));
}

void preenchervetor(int * const vetor, const unsigned int tamanho){
    srand(time(NULL));
    for(int i = 0; i < tamanho; i++){
        *(vetor + i) = rand() % 100 + 1;
    }
}

void fandl(const int * const vetor, const int ** const vetorfl, const unsigned int tamanho){
    for(int i = 0; i < tamanho; i++){
        if(!(*(vetor + i) % 2)){
            *(vetorfl) = vetor + i;
            break;
        }
    }

    for(int i = tamanho - 1; i >= 0; i--){
        if(!(*(vetor + i) % 2)){
            *(vetorfl + 1) = vetor + i;
            break;
        }
    }

}

void imprimirvetor(const int * const vetor, const unsigned int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("[%p] = %d\n", vetor + i, *(vetor + i));
    }
}