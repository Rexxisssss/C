#include <stdio.h>
#include <math.h>
int main(){
    int a;
    int b;
    int soma;
    int sub;
    int mult;
    float divi;
    
    printf ("Digite o primeiro número: ");
    scanf ("%d", &a);
    
    printf ("Digite o segundo número: ");
    scanf ("%d", &b);
    
    soma = a + b;
    sub = a - b;
    mult = a * b;
    divi = a / (float)b; //typecasting?? tf is this??, Alex told me that it was to convert variables :D
    
    printf ("\n A soma dos números é igual a: %d", soma);
    printf ("\n A subtração dos números é igual a: %d", sub);
    printf ("\n A multiplicação dos números é igual a: %d", mult);
    printf ("\n A divisão dos números é igual a: %f", divi);
    
    return 0; 
}
