#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    // Allocate memory for the result array (size 2 for two indices)
    int *result = (int *)malloc(2 * sizeof(int));
    if (!result)
    {
        *returnSize = 0; // If memory allocation fails
        return NULL;
    }

    // Iterate through the array to find the two numbers
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2; // Set the size of the result array
                return result;
            }
        }
    }

    // If no solution is found, return NULL
    *returnSize = 0;
    free(result); // Free the allocated memory
    return NULL;
}

int main()
{
    int nums[] = {2, 5, 7, 15};
    int target = 9;
    int returnSize;

    int *result = twoSum(nums, 4, target, &returnSize);

    if (result)
    {
        printf("Indices: %d, %d\n", result[0], result[1]);
        free(result); // Free memory after use
    }
    else
    {
        printf("No solution found.\n");
    }

    return 0;
}
