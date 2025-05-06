#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers separated by space:");
    scanf("%d %d", &num1, &num2);
    if (num1 % num2 == 0) {
        printf("\n%d is a multiple of %d.", num1, num2);
    } else {
        printf("\n%d is not a multiple of %d.", num1, num2);
    }
    return 0;
}