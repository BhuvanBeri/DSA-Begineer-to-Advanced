//If else block

#include<stdio.h>

int main() {

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("You entered %d \n", n);

    if (n % 2 == 0) {
        printf("%d is Even Number \n");
    } else {
        printf("%d is Odd Number \n", n);
    }

    return 0;
}