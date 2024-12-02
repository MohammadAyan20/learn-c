#include <stdio.h>
#include <string.h>

int finalValueAfterOperations(char **operations, int operationsSize);

int main()
{
    int x;
    int operationsSize = 4;
    char *operations[] = {"++X", "X++", "--X", "X--"};
    printf("%d", finalValueAfterOperations(operations, operationsSize));
}

int finalValueAfterOperations(char **operations, int operationsSize)
{
    int X = 0;
    for (int i = 0; i < operationsSize; i++)
    {
        strcmp(operations[i], "X++") == 0 || strcmp(operations[i], "++X") == 0 ? X++ : X--;
    }

    return X;
}