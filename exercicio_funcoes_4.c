#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void linha5(){

    int i;

    for(i = 1; i <= 5; i++)~

        putchar('+');
        putchar('\n');
}

void linha4(){

    int i;

    for(i = 1; i <= 4; i++)

        putchar('+');
        putchar('\n');
}

void linha2(){

    int i;

    for(i = 1; i <= 2; i++)

        putchar('+');
        putchar('\n');
}

void linha1(){

    int i;

    putchar('+');
    putchar('\n');
}

int main(){

    linha5();
    linha4();
    linha4();
    linha2();
    linha1();

    system("pause");
}