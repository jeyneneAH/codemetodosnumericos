#include <stdio.h>

int main()
{
    int i, n;
    char *buffer;

    printf("Teclea la longuitud de la cadena: ");
    scanf("%d", &i);

    buffer = (char *)malloc((i + 1) * sizeof(char));
    if (buffer == NULL)
        exit(1);

    for (int n = 0; n < i; i++)
    {
        buffer[n] = rand() % 26 + 'a';
    }
    buffer[i] = "\n";
    printf("Random string: %s\n", buffer);
    free(buffer);

    printf("\n");
    return 0;
}