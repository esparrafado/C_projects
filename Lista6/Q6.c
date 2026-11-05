#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void imprimirvetor(const int * const, const unsigned int);
void preenchervetor(int * const, const unsigned int, const unsigned int);

int main(int argc, char *argv[]){
    srand(time(NULL));
    if(argc!=3){
        puts("Parametros demais ou imcompletos");
        exit(1);
    }

    int tamanho = atoi(argv[1]);
    int amplitude = atoi(argv[2]);
    float emq = 0;
    
    int *a = malloc(tamanho * sizeof(int));
    int *b = malloc(tamanho * sizeof(int));

    preenchervetor(a, tamanho, amplitude);
    preenchervetor(b, tamanho, amplitude);

    for(int i = 0; i < tamanho; i++){
        emq += (*(a + i) - *(b + i)) * (*(a + i) - *(b + i));
    }

    emq = emq / tamanho;

    puts("Vetor a");
    imprimirvetor(a, tamanho);

    puts("Vetor b");
    imprimirvetor(b, tamanho);

    printf("EMQ = %f", emq);
}


void preenchervetor(int * const vetor, const unsigned int tamanho, const unsigned int amplitude){
    
    for(int i = 0; i < tamanho; i++){
        *(vetor + i) = rand() % amplitude + 1;
    }
}


void imprimirvetor(const int * const vetor, const unsigned int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("[%p] = [%d]\n", (vetor + i), *(vetor + i));
    }
}