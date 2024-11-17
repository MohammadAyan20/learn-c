#include <stdio.h>
#include <math.h>

int isPalindrome(int arr[], int length);

int main()
{
  int length;
  printf("enter the size of Array:");
  scanf("%d", &length);
   int arr[length];
  printf("Enter the %d Elements :", length);
  for (int i = 0; i < length; i++)
  {
    scanf("%d", &arr[i]);
  }
  int result= isPalindrome(arr, length);
  if (result == 1)
  {
    printf("Number is Palindrome");
  }
  else
  {
    printf("Number is not Palindrome");
  }
}

int isPalindrome(int arr[], int length)
{

  int result;
  for (int i = 0; i <= length / 2; i++)
  {
    if (arr[i] == arr[length - 1- i])
    {
      result = 1;
    }
    else
    {
      result = 0;
    }
  }
  return result;
}