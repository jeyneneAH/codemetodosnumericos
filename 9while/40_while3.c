#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 1;
    while (numero <= 500)
    {
        printf("%d,",numero);
        printf("%d,",(numero*numero));
        printf("%d,\n",(numero*numero*numero));
        numero++;
    }

    return 0;
}