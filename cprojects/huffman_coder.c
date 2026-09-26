#include<stdio.h>

struct list {
    char element;
    int quantidade;
};

int main(){
    char word[10];
    struct list chars[50];

    scanf("%s",word);

    chars[0] = (struct list){word[0], 0};
    printf("%c = %d\n", chars[0].element, chars[0].quantidade);

    for(int a = 0; word[a] != '\0'; a++){

        for(int b = 0; chars[b].element != '\0'; b++){
           
            if(word[a] == chars[b].element){
                chars[b].quantidade += 1;
            } else {
                chars[b] = (struct list){word[a],1};
            }
            printf("%c = %d\n", chars[b].element, chars[b].quantidade);
        }
    
    }

}