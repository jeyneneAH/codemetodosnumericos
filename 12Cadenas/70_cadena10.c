#include <stdio.h>
#include <stdlib.h>

int main()
{
    int res;
    char palabra1[50];
    char palabra2[50];

    printf("Ingresa una palabra: \n");
    scanf("%s", palabra1);
    printf("Ingresa otra palabra: \n");
    scanf("%s", palabra2);

    res = strcmp(palabra1, palabra2);
    
    if (res == 0)
    {
        printf("Las palabras son iguales \n");
    }
    else if (res > 0)
    {
        printf("La palabra %s es menor que la palabra %s", palabra1, palabra2);
    }
    else if (res < 0)
    {
        printf("La palabra %s es mayor que la palabra %s", palabra1, palabra2);
    }

    printf("\n");
    return 0;
}