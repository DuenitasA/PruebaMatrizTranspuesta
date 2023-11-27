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

    int transpuesta[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            transpuesta[i][j] = matriz[j][i];
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", transpuesta[i][j]);
        }
        printf("\n");
    }
    return 0;
}