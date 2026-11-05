#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define AMP 100

void imprimirvetor(const int * const, const unsigned int);
void preenchervetor(int *, const unsigned int);
void vminmax(const int * const, int * const, const unsigned int);
void normalizacao(const int * const, const int * const, const unsigned int);

int main(){
    int tamanho;
    int minmax[2];
    int *mm = minmax;

    puts("Insira o tamanho do vetor");
    scanf("%i", &tamanho);

    int *vetor = malloc(tamanho * sizeof(int));

    preenchervetor(vetor, tamanho);
    vminmax(vetor, minmax, tamanho);
    imprimirvetor(vetor, tamanho);
    normalizacao(vetor, minmax, tamanho);

}

void preenchervetor(int * const vetor, const unsigned int tamanho){
    srand(time(NULL));
    for(int i = 0; i < tamanho; i++){
        *(vetor + i) = rand() % 100 + 1;
    }
}

void vminmax(const int * const vetor, int * const minmax, const unsigned int tamanho){
    int min = *(vetor);
    int max = *(vetor);
    *(minmax) = min;
    *(minmax + 1) = max;
    for(int i = 0; i < tamanho; i++){
        if(*(vetor + i) < min){
            min = *(vetor + i);
            *(minmax) = *(vetor + i);
        }
    }

    for(int i = tamanho - 1; i >= 0; i--){
        if(*(vetor + i) > max){
            max = *(vetor + i);
            *(minmax + 1) = *(vetor + i);
        }
    }

}

void imprimirvetor(const int * const vetor, const unsigned int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("[%p] = %d\n", vetor + i, *(vetor + i));
    }
}

void normalizacao(const int * const vetor, const int * const minmax, const unsigned int tamanho){
    puts("Vetor normalizado");
    for(int i = 0; i < tamanho; i++){
        float X = (float)(*(vetor + i) - *(minmax)) / (*(minmax + 1) - *(minmax));
        printf("[%d] = %f\n", *(vetor + i), X);
    }
}