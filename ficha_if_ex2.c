#include <stdio.h>
#include <stdlib.h>

int main(){

    int cA;
    int cB;
    int lA;
    int lB;
    int xA;
    int xB;

    system("cls");

    printf("Insira o comprimento da primeira sala: ");
    scanf("%d", &cA);

    printf("Insira a largura da primeira sala: ");
    scanf("%d", &lA);

    system("cls");

    printf("Insira o comprimento da segunda sala: ");
    scanf("%d", &cB);

    printf("Insira a largura da segunda sala: ");
    scanf("%d", &lB);

    xA = cA * lA;

    xB = cB * lB;

    system("cls");

    if(xA > xB){

        printf("Tamanho da primeira sala: %d metros quadrados\n", xA);
        printf("Tamanho da segunda sala: %d metros quadrados\n", xB);

        printf("\nA primeira sala e maior que a segunda sala");

    }

    else if(xB > xA){

        printf("Tamanho da primeira sala: %d metros quadrados\n", xA);
        printf("Tamanho da segunda sala: %d metros quadrados\n", xB);

        printf("\nA segunda sala e maior que a primeira sala");

    }

    else{

        printf("Tamanho da primeira sala: %d metros quadrados\n", xA);
        printf("Tamanho da segunda sala: %d metros quadrados\n", xB);

        printf("\nAs salas tem o mesmo tamanho");

    }

    return 0;
}