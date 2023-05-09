#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    

    int i;
    int a[11];
    int x;

    system("cls");

    printf("Introduza um numero para o calculo da multiplicacao: ");
    scanf("%d", &x);

    system("cls");

    for(i = 0; i < 11; i++){

        a[i] = x * i;

        printf("%d * %d = %d\n", x, i, a[i], i +1);
    }

    return 0;
}