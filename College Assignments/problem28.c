#include <stdio.h>

int main() {
    unsigned int num, copy_num, sum = 0;
    printf("Enter the number:");
    scanf("%d", &num);
    copy_num = num;
    while (copy_num >= 1) {
        sum = sum + copy_num % 10;
        copy_num = copy_num / 10;
    }
    printf("\nThe sum of digits of %d is %d.", num, sum);
    return 0;
}