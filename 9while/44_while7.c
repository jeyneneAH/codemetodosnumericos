#include <stdio.h>
int main()
{

    int i;

    printf("Enteros positivos menores que 100 no divisibles por 7: ");
    for (i = 1; i < 100; i++)
    {
        if (i % 7 != 0)
        {
            printf("%d, ", i);
        }
    }
    printf("\n");
}