#include <stdio.h>
#include <stdlib.h>

int main(){

int m=0;
int n=0;

printf("Ingresa un valor para m: \n");
scanf("%d", &m);
printf("\nIngresa un valor para n: \n");
scanf("%d", &n);


    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d\t",i*j);
        }
        printf("\n");
    }
    system("Pause");
    return 0;   
}