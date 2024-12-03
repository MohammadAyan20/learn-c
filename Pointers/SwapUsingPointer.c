#include <stdio.h>
#include <string.h>

int swap(int *a, int *b);

int main()
{
    int a;
    int b;
    printf("Enter the value of a :");
    scanf("%d", &a);
    printf("Enter the value of b :");
    scanf("%d", &b);
    swap(&a, &b);
    printf("a=%d\n", a);
    printf("b=%d", b);
}

int swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}