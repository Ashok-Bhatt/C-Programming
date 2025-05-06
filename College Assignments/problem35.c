#include <stdio.h>
#include <math.h>

int main() {
    int num, copy_num, binary = 0;
    printf("Enter the decimal number:");
    scanf("%d", &num);

    copy_num = num;
    int binary_factor = 0;
    while (copy_num >= 1) {
        if (copy_num % 2 != 0) {
            binary = binary + pow(10, binary_factor);
        }
        binary_factor = binary_factor + 1;
        copy_num = copy_num / 2;
    }
    printf("\nThe binary of %d is %d\n", num, binary);
    printf("The octal of %d is %o\n", num, num);
    printf("The hexadecimal of %d is %x\n", num, num);
    return 0;
}