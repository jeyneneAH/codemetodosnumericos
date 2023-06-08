#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[100];
    int i;
    int j = 100;
    for (i = 0; i < 100; i++)
    {
        j = j - 1;

        vector[i] = j;
    }
    for (i = 0; i < 100; i++)
    {
        printf("Arreglo[%d] : %d\n", i, vector[i]);
    }
    return 0;
}