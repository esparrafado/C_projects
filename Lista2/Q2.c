#include<stdio.h>

int main(){
    unsigned char day;

    do{
        puts("Selecione um dia da semana. \n1 - Domingo. \n2 - Segunda. \n3 - Terca. \n4 - Quarta. \n5 - Quinta. \n6 - Sexta. \n7 - Sabado");
        scanf("%hhu", &day);

        switch (day) {
            case 1:
                puts("O dia da semana selecionado foi domingo.");
                break;

            case 2:
                puts("O dia da semana selecionado foi segunda.");
                break;

            case 3:
                puts("O dia da semana selecionado foi terça.");
                break;

            case 4:
                puts("O dia da semana selecionado foi quarta.");
                break;

            case 5:
                puts("O dia da semana selecionado foi quinta.");
                break;

            case 6:
                puts("O dia da semana selecionado foi sexta.");
                break;

            case 7:
                puts("O dia da semana selecionado foi sabado.");
                break;
            
            default:
                puts("Opção selecionada, invalida");
                break;
        }
    } while(1);
}