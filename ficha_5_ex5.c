#include <stdio.h>
#include <conio.h>

int main(){

    float i;
    float soma_das_notas = 0;
    float notas;
    float nota;
    float media;

    printf("Insira o numero de notas que vai inserir na media: ");
    scanf("%f", &notas);

    for (i = 1 ; i <= notas; i++) {

        printf("Insira uma nota: ");
        scanf("%f", &nota);

        soma_das_notas = soma_das_notas + nota;

    }

    media = soma_das_notas / notas;

    printf("A media e %.2f valores", media);

    return 0;
}