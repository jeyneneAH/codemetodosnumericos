#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[100];
    int i = 0;

    while (i <= 100)
    {
        vector[i] = i * 2;
        printf("2 * %d = %d\n", i, vector[i]);
        i++;
    }

    system("Pause");
    return 0;
}