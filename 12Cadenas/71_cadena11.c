#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[100];
    int longitud, palindromo = 1;

    printf("Introduce una palabra: ");
    scanf("%s", palabra);

    longitud = strlen(palabra);

    for (int i = 0; i < longitud / 2; i++)
    {
        if (palabra[i] != palabra[longitud - i - 1])
        {
            palindromo = 0;
            break;
        }
    }

    if (palindromo)
    {
        printf("%s es un palíndromo\n", palabra);
    }
    else
    {
        printf("%s no es un palíndromo\n", palabra);
    }

    printf("\n");
    return 0;
}