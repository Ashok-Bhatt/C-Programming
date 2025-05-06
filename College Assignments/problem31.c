#include <stdio.h>

int main() {
    int num1, num2, lcm = 1, larger;
    printf("Enter two numbers separated by space:");
    scanf("%d %d", &num1, &num2);
    if (num1 <= 0 || num2 <= 0) {
        printf("\nInvalid Input!");
    } else if (num1 == num2) {
        lcm = num1;
        printf("\nlcm(%d,%d) = %d", num1, num2, lcm);
    } else {
        if (num1 > num2) {
            larger = num1;
        } else {
            larger = num2;
        }
        int larger_copy = larger;
        while (1) {
            if (larger % num1 == 0 && larger % num2 == 0) {
                lcm = larger;
                printf("\nlcm(%d,%d) = %d", num1, num2, lcm);
                break;
            } else {
                larger = larger + larger_copy;
            }
        }
    }
    return 0;
}