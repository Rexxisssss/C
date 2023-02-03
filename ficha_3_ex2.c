#include <stdio.h>
#include <stdlib.h>

int main(){

    int sala1;
    int sala2;
    int comprimento1;
    int comprimento2;
    int largura1;
    int largura2;

    printf("Indique o comprimento da primeira sala: ");
    scanf("%d", &comprimento1);

    printf("Indique a largura da primeira sala: ");
    scanf("%d", &largura1);

    sala1 = largura1 * comprimento1;

    printf("Indique o comprimento da segunda sala: ");
    scanf("%d", &comprimento2);

    printf("Indique a largura da segunda sala: ");
    scanf("%d", &largura2);

    sala2 = largura2 * comprimento2;

    system("cls");

    if (sala1 < sala2){

        printf("A sala 2 e maior do que a sala 1");

    }

    else if (sala2 < sala1){

        printf("A sala 1 e maior que a sala 2");

    }

    else{

        printf("As salas sao do mesmo tamanho");

    }

    return 0;
}