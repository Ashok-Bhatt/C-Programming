#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers separated by space:");
    scanf("%d %d", &num1, &num2);
    if (num1 % num2 == 0) {
        printf("\n%d is a factor of %d.", num2, num1);
    } else {
        printf("\n%d is not a factor of %d.", num2, num1);
    }
    return 0;
}