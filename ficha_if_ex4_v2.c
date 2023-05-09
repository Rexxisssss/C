#include <stdio.h>
#include <stdlib.h>

int main(){

    int peso;
    float altura;
    char cabelo;

    system("cls");

    printf("Insira o peso: ");
    scanf("%d", &peso);

    system("cls");

    printf("Insira a altura(ex. 1.5): ");
    scanf("%f", &altura);

    system("cls");

    if(peso <= 57 && altura >= 1.7){

        printf("\n Indique o cabelo (l = louro; c = castanho; p = preto): ");
        scanf("%c", &cabelo);

        if(cabelo = 'l'){


            printf("Peso = %d\n", peso);
            printf("Altura = %.2f\n", altura);
            printf("Cabelo %c", cabelo);

            printf("O modelo pode ser selecionado");

        }

        else{

            printf("Peso = %d\n", peso);
            printf("Altura = %.2f\n", altura);
            printf("Cabelo %c", cabelo);

            printf("O modelo nao pode ser selecionado");

        }

    }

    if(peso > 57 && altura < 1.7){

        printf("Peso = %d\n", peso);
        printf("Altura = %.2f\n", altura);

        printf("O modelo nao pode ser selecionado");
    }

    return 0;
}