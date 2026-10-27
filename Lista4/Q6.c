#include<stdio.h>
#include <string.h>
#define TAM 100

int main(){
    char str[TAM];
    char str2[TAM];
    unsigned char count = 0;

    puts("Digite uma frase");
    fgets(str, sizeof(str), stdin);
    for(int i = 0; i < TAM; i++){
        if(str[i] == '\n'){
            break;
        } else {
            count += 1;
        }
    }

    for(int i = 0; i < count; i++){
        str2[i] = str[count - i - 1];
    }
    
    printf("%s", str2);

}