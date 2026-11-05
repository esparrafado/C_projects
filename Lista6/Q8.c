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
    int **m;
    int somatorio;

    m = malloc(tamanho * sizeof(int *));

    for(int i = 0; i < tamanho; i++){
        m[i] = malloc(tamanho * sizeof(int));
        preenchervetor(m[i], tamanho, amplitude);
    }

    puts("Matriz gerada");
    for(int i = 0; i < tamanho; i++){
        imprimirvetor(m[i], tamanho);
        printf("\n");
    }

    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            if(j == i){
                somatorio += m[i][j];
            }
        }
    }

    if(!(somatorio % 2)){
        puts("O somatorio da diagonal principal e par");
    } else {
        puts("O somatorio da diagonal principal e impar");
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