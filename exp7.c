/*Name: Mariyam Zagral
Class : Computer(FE)
Batch: D
Roll no :09
UIN: 251P084*/

#include<stdio.h>
int main(){
    int i, n ,a[10], largest;

printf("Enter how many number:");
scanf("%d",&n);

printf("Enter the number:\n");
for(i = 0;i < n; i++) {
    scanf("%d",&a[i]);
}
largest = a [0];
for(i=1; i < n; i++) {
    if(a[i] > largest ){
     largest= a[i];
    }
}
printf("Largest number = %d\n",largest);

return 0;
}
