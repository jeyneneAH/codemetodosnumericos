#include <stdio.h>
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
}