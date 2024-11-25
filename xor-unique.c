#include <stdio.h>

/*
 * This program finds the unique element in an array
 * where every element appears twice except one.
 */

int findUnique(int arr[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result ^= arr[i]; // XOR each element
        printf("%d\n",result);
    }
    return result;
}

int main()
{
    int arr[] = {4, 7, 2, 3, 4, 7, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int unique = findUnique(arr, size);
    printf("The unique element is: %d\n", unique);

    return 0;
}
