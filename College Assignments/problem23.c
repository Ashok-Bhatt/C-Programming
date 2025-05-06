#include <stdio.h>

int main() {
    int num, digit = 0;
    printf("Enter the number:");
    scanf("%d",&num);
    while (num >= 1) {
        digit = digit + 1;
        num = num / 10;
    }
    printf("Number of digits: %d", digit);
    return 0;
}
