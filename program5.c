#include <stdio.h>
int main() {
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