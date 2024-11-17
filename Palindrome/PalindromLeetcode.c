#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h> // For INT_MAX and INT_MIN

bool isPalindrome(int x);

int main()
{
    int x;
    printf("enter the number:");
    scanf("%d", &x);
    bool result = isPalindrome(x);
    if (result == true)
    {
        printf("Number is Palindrome");
    }
    else
    {
        printf("Number is not Palindrome");
    }
}

// bool isPalindrome(int x)
// {
//     if(x<0){
//         return false;
//     }
//     if(x==0) return true;
//     int t = x;

//     int elements = 0;
//     while (x != 0)
//     {
//         int digit = x % 10;
//         elements++;
//         x /= 10;
//     }
//     int arr[elements];
//     for (int i = 0; i < elements; i++)
//     {
//         int digit = t % 10;
//         t /= 10;
//         arr[i] = digit;
//     }

//     for(int i=0 ; i<=elements/2 ; i++){
//         if(arr[i]!=arr[elements-1-i]){
//              return false;
//         }
//     }
//     return true;
// }

bool isPalindrome(int x)
{
    // Negative numbers are not palindromes
    if (x < 0)
    {
        return false;
    }

    int original = x; // Store the original number
    int reversed = 0; // Variable to store the reversed number

    // Reverse the number
    while (x > 0)
    {
        int digit = x % 10; // Extract the last digit

        // Check for overflow before updating reversed
        if (reversed > (INT_MAX - digit) / 10)
        {
            return false; // Overflow detected, cannot be a palindrome
        }

        reversed = reversed * 10 + digit; // Append the digit
        x /= 10;                          // Remove the last digit from the number
    }

    // Check if the reversed number is equal to the original number
    return original == reversed;
}