/*
Questao 5:
Fazer um algoritmo que converta centimetros para polegadas (obs.: 1pol = 2.54cm)
*/

#include <stdio.h>

int main(){
    float cm, pol;
        printf("Escreva a medida em Centímetros: ");
        scanf("%f", &cm);
        
            pol = cm * 2.54;
            
        printf("Sua medida de %f centímetros, em polegadas, será: %f", cm, pol);

    return 0;
}
