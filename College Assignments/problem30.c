#include <stdio.h>

int main() {
    int num1, num2, gcd = 1, smaller;
    printf("Enter two numbers separated by space:");
    scanf("%d %d", &num1, &num2);
    if (num1 <= 0 || num2 <= 0) {
        printf("\nInvalid Input!");
    } else if (num1 == num2) {
        gcd = num1;
        printf("\ngcd(%d,%d) = %d", num1, num2, gcd);
    } else {
        if (num1 > num2) {
            smaller = num2;
        } else {
            smaller = num1;
        }
        for (int i = 2; i <= smaller; i++) {
            if (num1 % i == 0 && num2 % i == 0) {
                gcd = i;
            }
        }
        printf("\ngcd(%d,%d) = %d", num1, num2, gcd);
    }
    return 0;
}