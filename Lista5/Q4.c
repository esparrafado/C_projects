#include<stdio.h>
#include<stdlib.h>

int main(){
    int tamanho;
    int *vi;
    float *vf;
    char *vc;

    puts("Defina o tamanho dos vetores.");
    scanf("%i", &tamanho);

    if(tamanho <= 0){ 
        return 1;
    }

    vi = malloc(tamanho * sizeof(int));
    vf = malloc(tamanho * sizeof(int));
    vc = malloc(tamanho * sizeof(int));
    if(vi == NULL || vf == NULL || vc == NULL){
        puts("Falha na alocacao de memoria.");
        return 1;
    }

    puts("Preencha o vetor dos inteiros");
    for(int i = 0; i < tamanho; i++){
        puts("Insira um valor inteiro.");
        scanf("%i", vi + i);
    }

    puts("Preencha o vetor dos floats");
    for(int i = 0; i < tamanho; i++){
        puts("Insira um float");
        scanf("%f", vf + i);
    }

    puts("Preencha o vetor dos chars");
    for(int i = 0; i < tamanho; i++){
        puts("Insira um char");
        scanf(" %c", vc + i);
    }

    puts("Vetor dos inteiros");
    for(int i = 0; i < tamanho; i++){
        printf("[%i] = %i\n", vi, *(vi + i));
    }

    puts("Vetor dos floats");
    for(int i = 0; i < tamanho; i++){
        printf("[%i] = %f\n", vf, *(vf + i));
    }

    puts("Vetor dos chars");
    for(int i = 0; i < tamanho; i++){
        printf("[%i] = %c\n", vc, *(vc + i));
    }

    free(vi);
    free(vf);
    free(vc);

}