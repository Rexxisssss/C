#include <stdio.h>
#include <conio.h>
#define ICMS 3;
    int main(void){
        
        float preco_produto;
        float valor_icms;
        
        printf ("Informe o valor do produto: ");
        scanf ("%f", &preco_produto);
        
        valor_icms = preco_produto * ICMS;
        
        printf ("Valor do imposto a ser pago: %.2f€", valor_icms);
        getch();
        return 0;
        
        
    }