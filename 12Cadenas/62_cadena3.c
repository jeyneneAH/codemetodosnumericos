#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int len;
    char cad[10];
    printf("Introduce una palabara:\n");
    scanf("%s", cad);
    len = strlen(cad);
    printf("La longuitud de :\'%s\' es: %d\n", cad, len);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    return 0;
    
}