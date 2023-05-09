#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    char strings[5][100];
    int i;

    for(i = 0; i < 5; i++){

        printf("\n\nDigite uma string: ");
        gets(strings[i]); //entrada de cadeia de carateres
    }

    printf("\n\nAs strings que digitou foram: \n\n");

    for(i = 0; i < 5; i++){

        printf("%s\n", strings[i]);
    }

    system("pause");
}