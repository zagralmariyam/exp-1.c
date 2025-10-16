#include<stdio.h>
int main() {
    /*Name: Mariyam Zagral
     age: 18
     Class: FE (COMPUTER ENGG)
     Batch: D
     UIN: 251P084*/
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if(num % 2== 0) {
        printf("The given number is Even.\n",num);
    }else {
        printf("The given number is odd\n",num);
    }
    return 0;

}
