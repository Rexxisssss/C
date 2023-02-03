#include <stdio.h>
#include <stdlib.h>

int main(){

    float i = 1;
    float soma_das_notas = 0;
    float notas;
    float nota;
    float media;

    printf("Insira o numero de notas que vai inserir na media: ");
    scanf("%f", &notas);

    do{

        printf("Insira uma nota: ");
        scanf("%f", &nota);

        soma_das_notas = soma_das_notas + nota;
        i++;

        media = soma_das_notas / notas;

    }

    while(i <= notas);

    printf("A media e %.2f valores", media);
    
}