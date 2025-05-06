#include <stdio.h>

int main() {
    int num, sum = 0;
    for (int i = 0; i < 5; i++) {
        printf("Enter the number:");
        scanf("%d", &num);
        if (num % 2 != 0) {
            sum = sum + num;
        } else {
            continue;
        }
    }
    printf("The sum of all the odd numbers entered by you is %d.\n", sum);
    return 0;
}