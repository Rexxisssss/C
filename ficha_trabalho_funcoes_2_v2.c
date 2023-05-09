#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int fatorial(int escolhido){

    int fat = 1;
    int i;

    for(i = 1; i <= escolhido; i++)

        fat = fat * i;

    return fat;
}

void asterisco(){

    int i;

    for (i = 1; i < 40; i++)

        putchar('*');
        putchar('\n');
    
}

int main(){

    int resultado;
    int escolhido;

    system("cls");

    printf("Escolha um numero inteiro para fazer o seu fatorial: ");
    scanf("%d", &escolhido);

    resultado = fatorial(escolhido);

    asterisco();
    printf("Fatorial de %d", escolhido);
    printf("\nfatorial = %d\n", resultado);
    asterisco();

    return 0;
}