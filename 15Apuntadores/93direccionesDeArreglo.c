#include <stdio.h>
#include <stdlib.h>

int i[10];
float j[10];
int main()
{
    printf("\t\tEntero\t\tFlotante\n\n");
    for (int x = 0; x < 10; x++)
    {
        printf("Elemento %d: \t%d\t%d\n", x, &i[x], &j[x]);
    }

    printf("\n");
    return 0;
}