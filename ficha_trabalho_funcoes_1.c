#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float multiplicacao(float numero1, float numero2){

    float res = numero1 * numero2;
    return res;

}

float divisao(float numero1, float numero2){

    float res = numero1 / numero2;
    return res;

}

void main(){

    system("cls");

    float numero1;
    float numero2;

    printf("Insira o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Insira o segundo numero: ");
    scanf("%f", &numero2);

    printf("Mult = %.2f", multiplicacao(numero1, numero2));
    printf("\nDiv = %.2f\n\n", divisao(numero1, numero2));

    system("pause");

    return;
}