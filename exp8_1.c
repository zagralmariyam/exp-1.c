/*Name: Mariyam Zagral
Class : Computer(FE)
Batch: D
Roll no :09
UIN: 251P084*/

#include<stdio.h>
int main() {
    char str[100];
    int i =0;
     printf("Enter a string:");
     scanf("%s",str);

     while (str[i] != '\0'){
        i++;
     }
     printf("Length = %d",i);

     return 0;
}