#include <stdio.h>
#include <stdlib.h>

int main(){

    int dia;

    printf("Introduza o dia da semana de 1 a 7: ");
    scanf("%d", &dia);

    switch(dia){

        case 1:
            printf("Segunda-feira");
        break;

        case 2:
            printf("Terca-feira");
        break;

        case 3:
            printf("Quarta-feira");
        break;

        case 4:
            printf("Quinta-feira");
        break;

        case 5:
            printf("Sexta-feira");
        break;

        case 6:
            printf("Sabado");
        break;

        case 7:
            printf("Domingo");
        break;

    }

    return 0;

}