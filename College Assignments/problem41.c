#include <stdio.h>

int main() {
    int num, sum = 0;
    for (int i = 0; i < 5; i++) {
        printf("Enter the number:");
        scanf("%d", &num);
        if (num % 2 != 0) {
            sum = sum + num;
        } else {
            break;
        }
    }
    printf("The sum of the odd numbers entered before the even number is %d.\n", sum);
    return 0;
}