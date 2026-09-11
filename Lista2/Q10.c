#include<stdio.h>

int main(){
    for(char i = 15; i <= 90; i++){
        if(i % 4 == 0){
            printf("%i\n", i*i);
        }
    }
}