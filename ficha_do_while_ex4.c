#include <stdio.h>
#include <stdlib.h>

int main(){

    int count = 1;
    int numero;

    printf("Insira um numero: ");
    scanf("%d", &numero);
    
    do{
        
        if(!(count % 2 == 0)){
            
            printf("%d\n", count);
        
        }

        count++;
    }

    while(count <= numero);

    return 0;
}