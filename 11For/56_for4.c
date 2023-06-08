#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma = 0;
    printf("|A\t|A+2\t|A+4\t|A+6\t|\n");
    printf("_________________________________\n");
    for (int i = 0; i < 4; i++)
    {
        suma = suma + 3;
        printf("|%d\t|%d\t|%d\t|%d\t|\n", suma, suma + 2, suma + 4, suma + 6);
    }
    printf("\n");
    system("Pause");
    return 0;
}