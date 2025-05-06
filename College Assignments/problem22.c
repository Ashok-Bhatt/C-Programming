#include <stdio.h>

int main() {
    int num, last_digit;
    printf("Enter the number:");
    scanf("%d",&num);
    last_digit = num % 10;
    printf("\nThe last digit of the number: %d", last_digit);
    return 0;
}
