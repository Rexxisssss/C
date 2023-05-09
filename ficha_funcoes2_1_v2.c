#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void potencia(float b, float e){

    printf("\nPotencia (%.2f, %.2f) = %.2f\n\n", b, e, pow(b, e));

}

int main(){

    system("cls");

    float b;
    float e;

    printf("\n");
    puts("Programa para calculo da potencia");

    printf("\nBase = ");
    scanf("%f", &b);

    printf("Expoente = ");
    scanf("%f", &e);

    potencia(b, e);

    return 0;
}