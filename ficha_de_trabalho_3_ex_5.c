#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void potencia(float base, float expoente){

    printf("O quandrado do primeiro numero e: %.2f\n", pow(base, expoente));

}

void soma(int numero2, int numero3){

    printf("A soma dos dois numeros seguintes e: %d\n\n\n", numero2 + numero3);
}

int main(){

    system("cls");

    float base;
    float expoente = 2;
    int numero2;
    int numero3;

    printf("Insira um valor para o primeiro numero: ");
    scanf("%f", &base);

    printf("Insira um valor para o segundo numero: ");
    scanf("%d", &numero2);

    printf("Insira um valor para o terceiro numero: ");
    scanf("%d", &numero3);

    system("cls");

    potencia(base, expoente);
    soma(numero2, numero3);

    return 0;
}