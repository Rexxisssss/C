#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;
    int sair;
    int par = 2;
    
    do{

        for (numero = 1; numero <= 10; numero++){
            
            printf("%d\n", par);
            par = par + 2;

        }

        printf("Deseja Continuar? \n (0 -  Sair / 1 - Continuar): ");
        scanf("%d", &sair);
    }

    while(sair == 1);

    return 0;
}
