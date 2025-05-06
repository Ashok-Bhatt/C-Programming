#include <stdio.h>

int main() {
    int num, flag = 0;
    printf("Enter the number:");
    scanf("%d", &num);
    if (num <= 0) {
        printf("\nThe concept of prime and composite number is not valid for zero or negative numbers.");
    } else if (num == 1) {
        printf("\n%d is a special number", num);
    } else if (num == 2) {
        printf("\n%d is a prime number", num);
    } else if (num % 2 == 0) {
        printf("\n%d is a composite number", num);
    } else {
        for (int i = 3; i < num; i++) {
            if (num % i == 0) {
                flag = 1;
            }
        }
        if (flag == 0) {
            printf("\n%d is a prime number.", num);
        } else {
            printf("\n%d is a composite number.", num);
        }
    }
    return 0;
}