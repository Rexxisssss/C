#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

    float massa_molar;
    float massa;
    float quantidade_materia;
    int escolha;

    printf("1-Massa Molar\n");
    printf("2-Massa em gramas\n");
    printf("3-Quantidade de materia\n");

    printf("\nEscolha a conta que quer fazer: ");
    scanf("%d", &escolha);

    system("cls");

    switch(escolha){

        case 1: // massa molar

            printf("Insira a massa em gramas: ");
            scanf("%f", &massa);

            printf("Insira a quantidade de materia: ");
            scanf("%f", &quantidade_materia);

            massa_molar = massa / quantidade_materia;

            system("cls");

            printf("Massa em gramas: %.2f gramas\n", massa);
            printf("Quantidade de materia: %.2f mol\n\n", quantidade_materia);
            
            printf("Massa molar: %.2f g/mol", massa_molar);

        break;

        case 2: // massa em gramas

            printf("Insira a quantidade de materia: ");
            scanf("%f", &quantidade_materia);

            printf("Insira a massa molar: ");
            scanf("%f", &massa_molar);

            massa = quantidade_materia * massa_molar;

            system("cls");

            printf("Quantidade de materia: %.2f mol\n", quantidade_materia);
            printf("Massa molar: %.2f g/mol\n\n", massa_molar);

            printf("Massa: %.2f gramas", massa);

        break;

        case 3: // quantidade de materia

            printf("Insira a Massa: ");
            scanf("%f", &massa);

            printf("Insira a Massa molar: ");
            scanf("%f", &massa_molar);

            quantidade_materia = massa / massa_molar;

            system("cls");

            printf("Massa: %.2f gramas\n", massa);
            printf("Massa molar: %.2f g/mol\n\n", massa_molar);

            printf("Quantidade de materia: %.2f mol", quantidade_materia);

        break;
        
    }


}