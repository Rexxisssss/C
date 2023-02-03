#include <stdio.h>
#include <stdlib.h>

int main(){

    char genero;

    printf("Insira o seu genero, m = masculino, f = femenino: ");
    scanf("%c", &genero);

    switch(genero){

        case 'm':
            printf("Masculino");
        break;

        case 'f':
            printf("Femenino");
        break;

        default:
            printf("Genero invalido");
        break;
    }

    return 0;
} 