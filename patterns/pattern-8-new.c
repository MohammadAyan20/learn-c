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

    int l = n * 2 - 1;
    int num = 1;
    int s = n - 1;
    for (int i = 1; i <= l; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            printf("  ");
        }
        if (i < n)
        {
            s--;
        }
        else
        {
            s++;
        }

        for (int j = 1; j <= num / 2 + 1; j++)
        {
            printf("%d ", j);
        }
        for (int j = num / 2; j >= 1; j--)
        {
            printf("%d ", j);
        }
        if (i < n)
        {
            num = num + 2;
        }
        else
        {
            num = num - 2;
        }

        printf("\n");
    }

    return 0;
}