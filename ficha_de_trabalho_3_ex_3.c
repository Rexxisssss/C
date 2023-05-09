#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void vogal(char letra){

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){

        printf("A letra %c e uma vogal", letra);
    }

    else{

        printf("A letra %c nao e uma vogal", letra);

    }
}

int main(){

    char letra;

    printf("Insira uma letra: ");
    scanf("%c", &letra);

    vogal(letra);

    return 0;

}