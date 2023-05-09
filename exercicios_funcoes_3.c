#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void linha3(){

    int linha;

    for(linha = 1; linha <= 3; linha++ )

        putchar('*');
        putchar('\n');
}

void linha5(){

    int linha;

    for(linha = 1; linha <= 5; linha++)

        putchar('*');
        putchar('\n');
}

void linha7(){

    int linha;

    for(linha = 1; linha <= 7; linha++)

        putchar('*');
        putchar('\n');
}

int main(){

    system("cls");

    linha3();
    linha5();
    linha7();
    linha5();
    linha3();

    printf("\n\n\n\n");

    return 0;
}