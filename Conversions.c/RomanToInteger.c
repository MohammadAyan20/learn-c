#include <stdio.h>
#include <math.h>
#include <string.h>

int romanToInt(char *s);

int main(){
    char *s;
    printf("Enter the Roman Number : ");
    scanf("%s",s);
    int ans = romanToInt(s);
    printf("%d",ans);
}



int romanToInt(char *s)
{
    int roman[256]={0};
     roman['I']=1;
     roman['V']=5;
     roman['X']=10;
     roman['L']=50;
     roman['C']=100;
     roman['D']=500;
     roman['M']=1000;
     int length=strlen(s);
     int ans=roman[s[length-1]];
     for(int i=length-2 ; i>=0 ; i--){
          if(roman[s[i]]>=roman[s[i+1]]){
            ans=ans+roman[s[i]];
          }else
          {
            ans=ans-roman[s[i]];
          }
     }
     return ans;
}