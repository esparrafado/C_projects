#include<stdio.h>

int main(){
    unsigned char P = 0;
    unsigned char R = 0;
    unsigned char B = 0;
    unsigned char N = 0;

    while(1){
        signed char v;
        puts("Faça a sua votacao: \n0 - branco. \n5 - Pedro. \n7 - Renata. \nQualquer outro valor sera considerado nulo.");
        scanf(" %hhd", &v);

        if(v < 0){
            break;
        }

        switch (v){
            case 0:
                B++;
                break;

            case 5:
                P++;
                break;

            case 7:
                R++;
                break;

            default:
                N++;
                break;
        }
    }

    printf("O total de votos brancos foi: %hhu. \n", B);
    printf("O total de votos em pedro foi: %hhu. \n", P);
    printf("O total de votos em renata foi: %hhu. \n", R);
    printf("O total de votos nulos foi: %hhu. \n", N);
}