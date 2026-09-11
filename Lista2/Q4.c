#include<stdio.h>

int main(){
    unsigned char j = 150;
    unsigned char p = 110;

    for(int i = 0; i >= 0; i++){
        j += 2;
        p += 3;

        if(p > j){
            printf("Pedro sera maior que jose em %hhu anos", i + 1);
            break;
        }
    }
}