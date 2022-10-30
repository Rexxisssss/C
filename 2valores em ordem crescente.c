#include <stdio.h>
int main(){
    int a;
    int b;
    
    printf ("Digite o primeiro número: ");
    scanf ("%d", &a);
    
    printf  ("Digite o primeiro número: ");
    scanf ("%d", &b);
    
    if (a > b) {
        printf ("%d", b);
        printf ("<");
        printf ("%d", a);
    }
    
    else{
        printf ("%d", a);
        printf ("<");
        printf ("%d", b);
    }
    return 0;
}
