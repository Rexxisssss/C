#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;

    printf("Introduza um numero: ");
    scanf("%d", &numero);
    
    do{

        printf("Numero < 100\n");

        system("cls");

        printf("Introduza um numero: ");
        scanf("%d", &numero);

    }

    while(numero < 100);

   do{
      
        printf("Numero > 100\n");

        system("pause");    
   }

   while(numero > 100);

   return 0;
}