#include <stdio.h>
#include <stdlib.h>

int main(){
    int N,i,j;
    printf("Ingresa un numero: ");
    scanf("%d", &N);

    for ( i = 0; i < N; i++)
    {
        printf("\n");
        for ( j = 0; j <= i; j++)
        {
            printf("*");
        }
        
    }

    printf("\n");
    printf("\n");
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        
        for (int k = i; k <= N; k++) {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}