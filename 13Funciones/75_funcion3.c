#include <stdio.h>
#include <string.h>

void invertirCadena(char *cadena)
{
    int longitud = strlen(cadena);
    for (int i = 0; i < longitud / 2; i++)
    {
        char temp = cadena[i];
        cadena[i] = cadena[longitud - 1 - i];
        cadena[longitud - 1 - i] = temp;
    }
}

int main()
{
    char caracteres[100];
    int i = 0;
    char c = getchar();

    while (c != ' ' && c != '\n' && i < 99)
    {
        caracteres[i] = c;
        i++;
        c = getchar();
    }

    caracteres[i] = '\0';
    invertirCadena(caracteres);

    printf("%s\n", caracteres);

    return 0;
}