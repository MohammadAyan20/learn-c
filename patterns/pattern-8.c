#include <stdio.h>
#include <math.h>
/**WAP to print the following pattern, no of rows must be dynamic, take input from user.
 *           1
 *         1 2 1
 *       1 2 3 2 1
 *     1 2 3 4 3 2 1
 *   1 2 3 4 5 4 3 2 1
 *     1 2 3 4 3 2 1
 *       1 2 3 2 1
 *         1 2 1
 *           1
 */
int main()
{
    int n;
    printf("Enter the no. of lines you want:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", k);
        }
        for (int k = i - 1; k >= 1; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }

    for (int i = n; i > 1; i--)
    {
        for (int j = i; j <= n; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i - 1; k++)
        {
            printf("%d ", k);
        }
        for (int k = i - 2; k >= 1; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}