#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int res;
    char str1[] = "brisas";
    char str2[] = "para";
    res = strcmp(str1, str2);
    printf("resultado: %d", res);

    printf("\n");
    return 0;
}