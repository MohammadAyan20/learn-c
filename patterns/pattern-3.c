#include<stdio.h>
#include<math.h>

/**
 * WAP to print the following pattern, no of rows must be dynamic, take input from user.
 * 1
 * 2 3
 * 4 5 6
 * 7 8 9 10
 * 11 12 13 14 15
 */
int main(){
   int n;
   printf("Enter the no. of lines you want:");
   scanf("%d",&n);
   int c = 1;
   for (int i = 1; i <= n; i++)
   {    
        for (int j = 1; j <= i; j++)
        { 
            printf("%d ",c);
            c++;
            
        }
        printf("\n");
   }

   return 0;
}