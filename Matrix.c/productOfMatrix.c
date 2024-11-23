#include <stdio.h>
#include <string.h>
int main()
{
    int n;

    printf("Enter the size of the matrices (n x n): ");
    scanf("%d", &n);
    int m1[n][n];
    int m2[n][n];
    int result[n][n];
    printf("----------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element of matrix m1[%d][%d] ", j + 1, i + 1);
            scanf("%d", &m1[i][j]);

            result[i][j] = 0;
        }
    }
    printf("----------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element of matrix m2[%d][%d] ", j + 1, i + 1);
            scanf("%d", &m2[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)

            for (int k = 0; k < n; k++)
            {
                result[i][j] += m1[i][k] * m2[k][j];
            }
    }

    printf("----------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                printf("|");
            }
            printf("%3d ", m1[i][j]);
            if (j == n - 1)
            {
                printf("|");
            }
        }

        printf((i == n / 2) ? "  *  " : "     ");

        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                printf("|");
            }
            printf("%3d ", m2[i][j]);
            if (j == n - 1)
            {
                printf("|");
            }
        }

        printf((i == n / 2) ? "  =  " : "     ");

        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                printf("|");
            }
            printf("%3d ", result[i][j]);
            if (j == n - 1)
            {
                printf("|");
            }
        }
        printf("\n");
    }
    return 0;
}
