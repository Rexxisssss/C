#include "condicoes.h"
#include <stdlib.h>
#include <stdio.h>

void main(){

    char i;

    printf("Escreva um caratere: ");
    scanf("%s", &i);


    if(i == 1){

        printf("Letra minuscula");

    }

    if(i == 2){

        printf("Letra Maiuscula");

    }

    if(i == 3){

        printf("Codigo %d", (int)i);

    }

    return 0;
}