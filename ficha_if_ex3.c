#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota1;
    float nota2;
    float media;

    system("cls");

    printf("Insira a nota da prova escrita: ");
    scanf("%f", &nota1);

    system("cls");

    printf("Insira a nota da prova oral: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    system("cls");

    if(media >= 9,5){

        printf("Media = %.2f\n", media);
        printf("\nO aluno passou!");

    }

    else{

        printf("Media = %d\n", media);
        printf("\nO aluno chumbou!");

    }

    return 0;
}