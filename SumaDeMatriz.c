#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{

    srand(time(NULL));
    int a, b;

    printf("Ingrese la cantidad de filas.\n");
    scanf("%d", &a);
    printf("Ingrese la cantidad de columnas.\n");
    scanf("%d", &b);

    int matriz[a][b];
    printf("La matriz original es:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            matriz[i][j] = rand() % 101;
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    int segunda[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            segunda[i][j] = rand() % 101;
        }
    }
    printf("\n");
    printf("\n");
    printf("La segunda matriz es:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", segunda[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    if (a == b)
    {
        int suma[a][b];
        printf("La suma de las dos matrices es\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                suma[i][j] = matriz[i][j] + segunda[i][j];
            }
        }

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("%d ", suma[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}