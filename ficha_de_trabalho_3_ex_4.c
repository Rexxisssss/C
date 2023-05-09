#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void media(float nota1, float nota2, float nota3){

    float media;

    media = ((nota1 * 0.50) + (nota2 * 0.40) + (nota3 * 0.10));

    printf("A media e %.2f", media);
}

int main(){

    system("cls");

    float nota1;
    float nota2;
    float nota3;

    printf("Insira a nota do Teste: ");
    scanf("%f", &nota1);

    printf("Insira a nota do trabalho: ");
    scanf("%f", &nota2);

    printf("Insira a nota da assiduidade: ");
    scanf("%f", &nota3);

    media(nota1, nota2, nota3);

    return 0;
}