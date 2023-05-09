#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int fatorial(int escolhido){

    int fat = 1;
    int i;

    for(i = 1; i <= escolhido; i++)

        fat = fat * i;

    return fat;
}

int main(){

    int resultado;
    int escolhido;

    system("cls");

    printf("Escolha um numero inteiro para fazer o seu fatorial: ");
    scanf("%d", &escolhido);

    resultado = fatorial(escolhido);


    printf("\nfatorial de %d: %d",escolhido, resultado);

    return 0;
}