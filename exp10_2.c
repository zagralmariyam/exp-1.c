/*Name: Mariyam Zagral
Class : Computer(FE)
Batch: D
Roll no :09
UIN: 251P084*/

#include<stdio.h>
void printArrayReverse(int *arr, int size) {
    int *ptr= arr + size - 1;
    printf("Array elements in reverse order:");

    while (ptr >= arr) {
        printf("%d",*ptr);
        ptr--;
    }
    printf("\n");
}
int main(){
    int myArray[] = {10, 20, 30, 40, 50};
    int n = sizeof(myArray) / sizeof(myArray[0]);

    printf("Original array elements:");
    for(int i =0; i < n; i++) {
    printf("%d",myArray[i]);
    }
    printf("\n");
    printArrayReverse(myArray, n);
    return 0;
}