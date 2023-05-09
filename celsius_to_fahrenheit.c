#include <stdio.h>
#include <stdlib.h>

int main(){

    float celsius;
    float f;

    printf("Introduza o numero de graus fahrenheit para celsius: ");
    scanf("%f", &f);

    celsius = ((f - 32) * 5) / 9;

    printf("graus celsius = %.2f", celsius);

}