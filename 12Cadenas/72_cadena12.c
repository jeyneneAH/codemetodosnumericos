#include <stdio.h>
#include <ctype.h>

int main()
{
    char palabra[50];
    int freq[26] = {0};

    printf("Introduce una palabra: ");
    scanf("%s", palabra);

    for (int i = 0; palabra[i] != '\0'; i++)
    {
        char c = tolower(palabra[i]);
        if (c >= 'a' && c <= 'z')
        {
            freq[c - 'a']++;
        }
    }

    printf("Ocurrencias de cada letra:\n");
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c: %d\n", 'a' + i, freq[i]);
        }
    }

    return 0;
}
