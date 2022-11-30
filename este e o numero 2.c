#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "Portuguesa");
    printf ("Este é o número 2: %d", 2);
    return 0;
}