#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define tam 5

int main(){

    int i;
    int t[tam];

    for(i = 0; i < 5; i++){

        printf("Insira um numero inteiro: ");
        scanf("%d", &t);

    }

    for(i = 0; i < 5; i++){

        printf("T[%d] = %d\n", i, t);
    }

    return 0;
}