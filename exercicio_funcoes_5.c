#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void linha(int num, char carater){

    int i;

    for(i = 1; i <= num; i++)

        putchar(carater);
        putchar('\n');
}

int main(){

    system("cls");

    char carater;

    printf("Insira o carater que quer que aparaca: ");
    scanf("%c", &carater);

    linha(3, carater);
    linha(5, carater);
    linha(7, carater);
    linha(5, carater);
    linha(3, carater);

    return 0;
}