#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void crescente(int b){

    int i;

    for(i = 1; i <= b; i++)

        printf("%d\t", i);
}

void decrescente(int b){

    int i;

    for(i = b; i >= 1; i--)

        printf("%d\t", i);
}

int main(){

    int b;

    printf("Introduza um numero inicial maior que 0: ");
    scanf("%d", &b);

    printf("\n\n");

    crescente(b);

    printf("\n\n");

    decrescente(b);

    printf("\n\n\n");

    return 0;
}