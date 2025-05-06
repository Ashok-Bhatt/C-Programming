#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers separated by space:");
    scanf("%d %d", &num1, &num2);
    if (num1 % num2 == 0) {
        printf("\n%d is divisible by %d.", num1, num2);
    } else {
        printf("\n%d is not divisible by %d.", num1, num2);
    }
    return 0;
}