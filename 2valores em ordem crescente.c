#include <stdio.h>
int main(){
    int a;
    int b;
    
    printf ("Digite o primeiro número: ");
    scanf ("%d", &a);
    
    printf  ("Digite o primeiro número: ");
    scanf ("%d", &b);
    
    if (a > b) {
        printf ("%d < %d", b, a);
        
    }
    
    else{
        printf ("%d < %d", a, b);
        
    }
    return 0;
}
