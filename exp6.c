/*Name: Mariyam Zagral
Class : Computer(FE)
Batch: D
Roll no :09
UIN: 251P084*/

# include <stdio.h>

void counter() {
    static int count = 0;
    count ++;
    printf("Count =%d\n",count);
}
int main() {
    counter();
    counter();
    counter();

    return 0;
}