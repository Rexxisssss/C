#include <stdio.h>
int main(){
    float baseM;
    float basem;
    float altura;
    float area;
        
    printf ("Atribua um valor à base Maior: ");
    scanf ("%f", &baseM);
        
    printf ("Atribua um valor à base menor: ");
    scanf ("%f", &basem);
        
    printf ("Atribua um valor à altura: ");
    scanf ("%f", &altura);
        
    area = ((baseM + basem) * altura) / 2;
        
    system("clear");
    printf("A area do trapézio é %f metros quadrados", area);
    
    
    return 0;
    }
   