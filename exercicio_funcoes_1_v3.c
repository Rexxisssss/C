#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void linha(){

    int i;
        
        for(i = 1; i <= 30; i++)

            putchar('-');
            putchar('\n');
}

int main(){

    int i;

    linha();
    puts("Numeros de 1 a 5");
    linha();

    for(i = 1; i <= 5; i++)

        printf("%d\n", i);

    linha();

    system("pause");
}