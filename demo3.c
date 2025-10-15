#include<stdio.h>

 /*Name: Mariyam Zagral
     age: 18
     Class: FE (COMPUTER ENGG)
     Batch: D
     UIN: 251P084*/
int main() {
    int num1, num2, choice;

    printf("Enter two numbers: \n");
    scanf("%d %d",&num1,&num2);

    printf("Enter your choice:");
    printf("1. Add \n");
    printf("2. sub \n");
    printf("3. mul \n");
    printf("4. div \n");
    printf("5. mod \n");

     scanf("%d ", &choice);

    switch (choice) {
        case 1:
        printf("Result for addition is : %d",num1+num2);
        break;

        case 2:
        printf("Result for subtraction is : %d",num1-num2);
            break;

        case 3:
        printf("Result for mul is : %d",num1*num2);
        break;
        
        case 4:
        printf("Result for division is : %d",num1/num2);
        break;

        case 5:
        printf("Result for modulus is : %d",num1%num2);
        break;

        default:
        printf("invalid choice");
        break;
    }
    
}