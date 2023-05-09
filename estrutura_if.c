#include <stdio.h>

int main(){

    int A;

    printf(" Add a value to A: ");
    scanf("%d", &A);

    if (A > 0){

        printf("A is bigger than 0");
    }

    else{

        printf("A is smaller than 0");

    }
    return 0;
}