/*Name: Mariyam Zagral
Class : Computer(FE)
Batch: D
Roll no :09
UIN: 251P084*/

#include<stdio.h>
int addNumbers(int *a,int*b) {
    int sum = *a + *b;
    return sum;
}

int main () {
    int num1, num2;
    printf("Enter the number:");
    scanf("%d %d",&num1, &num2);

    printf("Result is: %d",addNumbers(&num1, &num2));

    return 0;
}