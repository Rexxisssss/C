#include <stdio.h>

int main(){

    char nome[999];
    float nota1;
    float nota2;
    float nota3;
    float media;

    printf("Indique o nome do aluno: ");
    scanf("%s", &nome);

    printf("\nIndinque a nota do primeiro teste: ");
    scanf("%f", &nota1);

    printf("\nIndique a nota do segundo teste: ");
    scanf("%f", &nota2);

    printf ("\nIndique a nota do terceiro teste: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("O aluno/a %s tem media final de %.2f valores", nome, media);

    return 0;
}