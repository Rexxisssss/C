#include <stdio.h>
#include <string.h>
    int main(){
        
        char x[100] = "IFSC-";
        char y[100] = "Telecom SJ";
        int tam;
        
        tam = strlen(x);
        
        printf ("x -> %s com tamanho %d \n", x, tam);
        printf ("y -> %s com tamanho %d \n", y, strlen(y));
        return 0;
    }