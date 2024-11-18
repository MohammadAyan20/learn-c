#include <stdio.h>
#include <string.h>
/*Create a String First Name and Last Name to store the name and print all the character using a loop*/

void printName(char arr[]);

int main(){
    char FirstName[]="Mohammad";
    char SecondName[]="Ayan";
    printName(FirstName);
    printName(SecondName);
    return 0;
}


void printName(char arr[]){
    for(int i=0 ;arr[i]!='\0' ; i++){
        printf("%c",arr[i]);
    }
    printf(" ");
}