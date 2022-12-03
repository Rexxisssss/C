#include <stdio.h>

int main(){
    
    int idade;
    
    printf ("Digite a sua idade: ");
    scanf ("%d", &idade);
    
    if (idade < 18){
        
        printf ("Tens %d anos. Não podes tirar a Carta de Condução!", idade);
        
    }
    
    else{
        
        printf ("Tens %d anos. Podes tirar a Carta de Condução", idade);
    }
}
