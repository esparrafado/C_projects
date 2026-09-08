#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main(){

    while(1){

        float AceC = 0;
        float AceM = 0;
        float AceE = 0;
        unsigned char aT;
        int aa, ab;
        int pa, pb;
        int va, vb;
        float n;
        float distaC, distbC;
        float distaM, distbM;
        float distaE, distbE;

        puts("Escreva o valor da area de A e o valor da area de B.");
        scanf("%d", &aa);
        scanf("%d", &ab);

        puts("Escreva o valor do perimetro de A e o valor do perimetro de B.");
        scanf("%d", &pa);
        scanf("%d", &pb);

        puts("Escreva o numero de vertices de A e o numero de vertices de B.");
        scanf("%d", &va);
        scanf("%d", &vb);

        puts("Quantos objetos você quer utilizar?");
        scanf("%f", &n);

        for(int i = 0; i < n; i++){

            int aX, pX, vX, GT;
            char classC, classM, classE;

            puts("Escreva o valor da area de X.");
            scanf("%d", &aX);
            puts("Escreva o valor do perimetro de X.");
            scanf("%d", &pX);
            puts("Escreva o numero de vertices de X.");
            scanf("%d", &vX);
            puts("Escreva o GT de X.");
            scanf("%d", &GT);
        
            distaC = (abs(aa - aX) > abs(pa - pX)) ? abs(aa - aX) : abs(pa - pX);
            distaC = (distaC > abs(va - vX)) ? distaC : abs(va - vX);

            distbC = (abs(ab - aX) > abs(pb - pX)) ? abs(ab - aX) : abs(pb - pX);
            distbC = (distbC > abs(vb - vX)) ? distbC : abs(vb - vX);

            if(distbC > distaC){
                classC = 1;
            } else if(distaC > distbC){
                classC = 2;
            } else {
                classC = 0;
            }

            distaM = abs(aX - aa) + abs(pX - pa) + abs(vX - va); 
            distbM = abs(aX - ab) + abs(pX - pb) + abs(vX - vb); 
 
            if(distbM > distaM){
                classM = 1;
            } else if(distaM > distbM){
                classM = 2;
            } else {
                classM = 0;
            }

            distaE = sqrt(pow((aX - aa), 2) + pow((pX - pa), 2) + pow((vX - va), 2));
            distbE = sqrt(pow((aX - ab), 2) + pow((pX - pb), 2) + pow((vX - vb), 2));

            if(distbE > distaE){
                classE = 1;
            } else if(distaE > distbE){
                classE = 2;
            } else {
                classE = 0;
            }
            
            AceC = classC == GT ? ++AceC : AceC;
            AceM = classM == GT ? ++AceM : AceM;
            AceE = classE == GT ? ++AceE : AceE;
        }

        if(n != 0){
            AceE = (AceE / n) * 100;
            AceC = (AceC / n) * 100; 
            AceM = (AceM / n) * 100;  

            printf("A acuracia da distancia de Chebyshev e %f", AceC);
            printf("A acuracia da distancia de Manhattan é %f", AceM);
            printf("A acuracia da distancia de Euclidiana é %f", AceE);

            if((AceC > AceE) & (AceC > AceM)){
                    puts("O melhor metodo foi o da distancia de Chebyshev");
                } else if((AceE > AceM) & (AceE > AceC)){
                    puts("O melhor metodo foi o da distancia de Manhattan");
                } else {
                    puts("O melhor metodo foi o da distancia Euclidiana");
                }
        
            } else {

            puts("Nenhum objeto informado");
       
        }
    }
}