#include<stdio.h>
#include<math.h>

/**
 * WAP to print the following pattern, no of rows must be dynamic, take input from user.
 * 54321
 *  5432
 *   543
 *    54
 *     5
 */
int main(){
   int n;
   printf("Enter the no. of lines you want:");
   scanf("%d",&n);
   
   for (int i = 0; i < n; i++)
   {    
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        int s = 0;
        for (int j = i; j < n; j++)
        { 
            printf("%d",n-s);
            s++;
        }
        printf("\n");
   }
   
   return 0;
}