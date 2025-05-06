#include <stdio.h>

int main() {
    unsigned int num, copy_num, reversed = 0;
    printf("Enter the number:");
    scanf("%d", &num);
    copy_num = num;
    while (copy_num >= 1) {
        reversed = reversed * 10 + copy_num % 10;
        copy_num = copy_num / 10;
    }
    printf("\nThe reverse of %d is %d.", num, reversed);
    return 0;
}