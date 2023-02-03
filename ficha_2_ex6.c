#include <stdio.h>

int main(){

    int celsius;
    int fahrenheit;

    printf("Indique o valor da temperatura em celsius: ");
    scanf("%d", &celsius);

    fahrenheit = ((9 * celsius) + 160) / 5;

    printf("%d graus celsius corresponde a %d graus fahrenheit.", celsius, fahrenheit);

    return 0;
}