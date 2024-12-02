#include <stdio.h>
#include <string.h>

int main()
{
    int m, n;
    printf("Enter the value of m : ");
    scanf("%d", &m);
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the Element[%d][%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix is : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int sum = 0;
    if (m < n)
    {
        for (int i = 0; i < m; i++)
        {
            sum += matrix[i][i];
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            sum += matrix[i][i];
        }
    }

    printf("sum = %d", sum);
    return 0;
}
