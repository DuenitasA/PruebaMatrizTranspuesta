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

    int transpuesta[b][a];

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            transpuesta[i][j] = matriz[j][i];
        }
    }
    printf("\n");
    printf("\n");
    printf("La matriz transpuesta es:\n");
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", transpuesta[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    int suma[a][b];
        printf("La suma de las dos matrices es\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            suma[i][j] = matriz[i][j] + transpuesta[i][j];
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
    return 0;
}