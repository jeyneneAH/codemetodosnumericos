#include <stdio.h>
#include <stdlib.h>

int main(){

int longuitudSerie = 50;

    for (int i = 1; i < (longuitudSerie/2); i++)
    {
        printf("%d, ", 2*i);
        printf("%d, ", 3*i);
    }

    printf("\n");

    system("Pause");
    return 0;   
}