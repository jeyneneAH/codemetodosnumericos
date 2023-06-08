#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Números divisibles entre 3 mayores a 0 y menores a mil: ");
    for (i = 1; i < 1000; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d, ", i);
        }
    }
    printf("\n");

    printf("Números divisibles entre 2 y 7 mayores a 0 y menores a mil: ");
    for (i = 1; i < 1000; i++)
    {
        if (i % 2 == 0 && i % 7 == 0)
        {
            printf("%d, ", i);
        }
    }
    printf("\n");

    printf("Enteros positivos menores que 100 no divisibles por 7: ");
    for (i = 1; i < 100; i++)
    {
        if (i % 7 != 0)
        {
            printf("%d, ", i);
        }
    }
    printf("\n");

    return 0;
}