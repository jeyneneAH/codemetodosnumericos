#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 17, y;
    int *p;
    p = &x;

    printf("El valor de x es: %p\n", *p);
    y = *p + 3;

    printf("El valor de y es: %d\n", y);

    printf("\n");
    return 0;
}