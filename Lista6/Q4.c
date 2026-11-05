#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define AMP 100

void imprimirvetor(const float * const, const unsigned int);
void preenchervetor(float *, const unsigned int);
void somatorio(const float * const, const unsigned int, float *);

int main(){
    int tamanho;
    float soma = 0;
    float *ps = &soma;

    puts("Insira o tamanho do vetor");
    scanf("%i", &tamanho);

    float *vetor = malloc(tamanho * sizeof(*vetor));

    preenchervetor(vetor, tamanho);
    imprimirvetor(vetor, tamanho);
    somatorio(vetor, tamanho, ps);

}

void preenchervetor(float * const vetor, const unsigned int tamanho){
    srand(time(NULL));
    for(int i = 0; i < tamanho; i++){
        *(vetor + i) = rand() % 100 + 1;
    }
}

void imprimirvetor(const float * const vetor, const unsigned int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("[%p] = %f\n", (void *)(vetor + i), *(vetor + i));
    }
}

void somatorio(const float * const vetor, const unsigned int tamanho, float *soma){
    for(int i = 0; i < tamanho; i++){
        *soma = *soma + *(vetor + i);
    }

    printf("Somatorio = [%f]", *soma);
}