#include <stdio.h>
#include <string.h>

int scoreOfString(char *s);

int main()
{
    char *s = "hello";
    printf("%d", scoreOfString(s));
}

int scoreOfString(char *s)
{
    int sum = 0;
    for (int i = 0; s[i] !='\0'; i++)
    {
        if(s[i+1]!='\0'){
        if (s[i] < s[i + 1])
        {
             sum = sum+ (s[i] - s[i + 1]) * (-1);
        }
        else
        {
             sum += (s[i] - s[i + 1]);
        }
        }


    }
    return sum;
}
