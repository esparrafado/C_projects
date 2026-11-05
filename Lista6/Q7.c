#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void imprimirvetor(const int * const, const unsigned int);
void preenchervetor(int * const, const unsigned int, const unsigned int);

int main(int argc, char *argv[]){
    srand(time(NULL));
    if(argc!=4){
        puts("Parametros demais ou imcompletos");
        exit(1);
    }

    int tamanho = atoi(argv[1]);
    int amplitude = atoi(argv[2]);
    int limiar = atoi(argv[3]);
    int **m;
    int **s;

    m = malloc(tamanho * sizeof(int *));
    s = malloc(tamanho * sizeof(int *));

    for(int i = 0; i < tamanho; i++){
        m[i] = malloc(tamanho * sizeof(int));
        s[i] = malloc(tamanho * sizeof(int));
        preenchervetor(m[i], tamanho, amplitude);
        for(int k = 0; k < tamanho; k++){
            s[i][k] = (m[i][k] > limiar)?1:0;
        }
    }

    puts("Matriz M");
    for(int i = 0; i < tamanho; i++){
        imprimirvetor(m[i], tamanho);
        printf("\n");
    }

    puts("Matriz S");
    for(int i = 0; i < tamanho; i++){
        imprimirvetor(s[i], tamanho);
        printf("\n");
    }
    
}


void preenchervetor(int * const vetor, const unsigned int tamanho, const unsigned int amplitude){
    for(int i = 0; i < tamanho; i++){
        *(vetor + i) = rand() % amplitude + 1;
    }
}


void imprimirvetor(const int * const vetor, const unsigned int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("[%d] ", *(vetor + i));
    }
}