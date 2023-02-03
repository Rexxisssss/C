#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;

    printf("Introduza o numero do mes para discobrir o trimestre: ");
    scanf("%d", &numero);

    switch(numero){

        case 1:
            printf("Primeiro trimestre");
        break;

        case 2:
            printf("Primeiro trimestre");
        break;

        case 3:
            printf("Primeiro trimestre");
        break;

        case 4:
            printf("Segundo trimestre");
        break;

        case 5:
            printf("Segundo trimestre");
        break;

        case 6:
            printf("Segundo trimestre");
        break;

        case 7:
            printf("Terceiro trimestre");
        break;

        case 8:
            printf("Terceiro trimestre");
        break;

        case 9:
            printf("Terceiro trimestre");
        break;

        case 10:
            printf("Quarto trimestre");
        break;

        case 11:
            printf("Quarto trimestre");
        break;

        case 12:
            printf("Quarto trimestre");
        break;
    }
    return 0;
}