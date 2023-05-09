#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float potencia(float b, float e){

    return pow(b, e); // pow: comando usado para fazer potencias
}

int main(){

    float b;
    float e;
    float r;
    

    printf("De um valor a base: ");
    scanf("%f", &b);

    printf("De um valor ao expoente: ");
    scanf("%f", &e);

    printf("********PROGRAMA PARA O CALCULO DA POTENCIA********\n");

    printf("BASE = %.2f\n", b);
    printf("EXPOENTE = %.2f\n", e);

    r = potencia(b, e);

    printf("Potencia (%.2f, %.2f) = %.2f", b, e, r);
    return 0;
}