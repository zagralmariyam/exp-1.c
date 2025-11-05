#include <stdio.h>
int main() {
    /*Name: Mariyam Zagral
     age: 18
     Class: FE (COMPUTER ENGG)
     Batch: D
     UIN: 251P084*/
    int start ,end;
    int sum = 0;

    printf("Enter the start and end limits:");
    scanf("%d %d", &start,&end);

    for (int i = start; i <= end; i++){
        if(i % 2 != 0);{
        sum += i ;
    }
    }
    printf("Sum of odd numbers is :%d\n",sum);

    return 0;

}
