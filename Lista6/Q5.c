#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void imprimirvetor(const int * const, const unsigned int);
void preenchervetor(int * const, const unsigned int, const unsigned int);

int main(int argc, char *argv[]){
    if(argc!=3){
        puts("Parametros demais ou imcompletos");
        exit(1);
    }

    int tamanho = atoi(argv[1]);
    int amplitude = atoi(argv[2]);
    float media = 0;
    float mediana = 0;

    int *vetor = malloc(tamanho * sizeof(int));
    preenchervetor(vetor, tamanho, amplitude);

    for(int i = 0; i < tamanho; i++){
        media += *(vetor + i);   
    }

    media = media / tamanho;

    for(int i = 0; i < tamanho; i++){

        for(int k = 0; k < (tamanho - 1); k++){

            if(*(vetor + k) > *(vetor + k + 1)){
                *(vetor + k + 1) = *(vetor + k) ^ *(vetor + k + 1);
                *(vetor + k) = *(vetor + k) ^ *(vetor + k + 1);
                *(vetor + k + 1) = *(vetor + k) ^ *(vetor + k + 1);
            }
        }
    }

    imprimirvetor(vetor, tamanho);

    if(tamanho % 2 == 0){
        mediana = (*(vetor + (tamanho / 2 - 1)) + *(vetor + (tamanho / 2))) / 2.0;
    } else {
        mediana = *(vetor + (tamanho / 2));
    }

    int FR = 0;
    int MR = 0;
    for(int i = 0; i < tamanho; i++){
        int MT = *(vetor + i);
        int FT = 0;
        for(int k = 0; k < tamanho; k++){
            if(*(vetor + k) == *(vetor + i)){
                FT++;
            }
        }
        if(FT > FR){
            MR = MT;
            FR = FT;
        }  
    }

    printf("Media = %f\n", media);
    printf("Mediana = %f\n", mediana);
    if(FR == 1){
        printf("Amodal");
    } else {
        printf("Moda = %d", MR);
    }
}


void preenchervetor(int * const vetor, const unsigned int tamanho, const unsigned int amplitude){
    srand(time(NULL));
    for(int i = 0; i < tamanho; i++){
        *(vetor + i) = rand() % amplitude + 1;
    }
}


void imprimirvetor(const int * const vetor, const unsigned int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("[%p] = [%d]\n", (vetor + i), *(vetor + i));
    }
}