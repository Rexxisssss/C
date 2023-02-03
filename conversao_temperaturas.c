#include <stdio.h>
#include <stdlib.h>

int main(){

    float conversao;
    float kelvin;
    float celsius;
    float fahrenheit;

    printf("1 - Kelvin para Celsius\n");
    printf("2 - Kelvin para Fahrenheit\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Celsius para Fahrenheit\n");
    printf("5 - celsius para kelvin\n");
    printf("6 - fahrenheit para kelvin\n");

    printf("\n\n\n");

    printf("Tipo de conversao: ");
    scanf("%f", &conversao);

    if(conversao == 1){

        printf("Graus em Kelvin: ");
        scanf("%f", &kelvin);

        celsius = kelvin - 273.15;

        printf("%.2f graus em kelvin sao %.2f graus celsius", kelvin, celsius);
    }

    if(conversao == 2){

        printf("Graus em kelvin: ");
        scanf("%f", &kelvin);

        fahrenheit = 1.8 * (kelvin - 273) + 32;

        printf("%.2f graus em kelvin sao %.2f graus fahrenheit", kelvin, fahrenheit);
    }

    if(conversao == 3){

        printf("graus em fahrenheit: ");
        scanf("%f", &fahrenheit);

        celsius = ((fahrenheit - 32) * 5) / 9;

        printf("%.2f graus em fahrenheit sao %.2f graus celsius", fahrenheit, celsius);
    }

    if(conversao == 4){

        printf("Graus celsius: ");
        scanf("%f", &celsius);
        
        fahrenheit = ((9 * celsius) + 160) / 5;

        printf("%.2f graus celsius sao %.2f graus fahrenheit.", celsius, fahrenheit);
    }

    if(conversao == 5){

        printf("Graus em celsius: ");
        scanf("%f", &celsius);

        kelvin = celsius + 273.15;

        printf("%.2f graus celsius sao %.2f graus kelvin", celsius, kelvin);
    }

    if(conversao == 6){

        printf("Graus em fahrenheit: ");
        scanf("%f", &fahrenheit);

        kelvin = ((fahrenheit + 459.67) * 5) / 9;

        printf("%.2f graus fahrenheit sao %.2f graus kelvin", fahrenheit, kelvin);
    }

    while(conversao > 6){

        printf("Conversao invalida\n");

        system("pause");  
    }

    return 0;

}