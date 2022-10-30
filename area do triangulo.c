#include <stdio.h>
int main(){
    float comprimento;
    float altura;
    float area;
    
    printf ("Atribua um valor ao comprimento do quadrado: ");
    scanf ("%f", &comprimento);
    
    printf (" Atribua um valor à altura: ");
    scanf ("%f", &altura);
    
    area = (comprimento * altura) / 2;
    
    printf ("A area do triângulo é %f metros quadrados", area);
    
    
    return 0;
}
