#include <stdio.h>
#include <math.h>

int main() {
    int num, copy_num, decimal = 0;
    printf("Enter the binary number:");
    scanf("%d", &num);

    copy_num = num;
    int decimal_factor = 0;
    while (copy_num >= 1) {
        if (copy_num % 10 != 0) {
            decimal = decimal + pow(2, decimal_factor);
        }
        decimal_factor = decimal_factor + 1;
        copy_num = copy_num / 10;
    }
    printf("\nThe decimal of %d is %d\n", num, decimal);
    printf("The octal of %d is %o\n", num, decimal);
    printf("The hexadecimal of %d is %x\n", num, decimal);
    return 0;
}