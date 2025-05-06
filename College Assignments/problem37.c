#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX 10

int main() {
    char hexadecimal[MAX];
    printf("Enter the hexadecimal number:");
    scanf("%s", hexadecimal);
    int decimal = 0, index = 0;
    while (hexadecimal[index] != '\0') {
        if (hexadecimal[index] >= '0' && hexadecimal[index] <= '9') {
            decimal = decimal * 16 + (hexadecimal[index] - '0');
        } else if (hexadecimal[index] >= 'a' && hexadecimal[index] <= 'f') {
            decimal = decimal * 16 + (hexadecimal[index] - 'a' + 10);
        } else if (hexadecimal[index] >= 'A' && hexadecimal[index] <= 'F') {
            decimal = decimal * 16 + (hexadecimal[index] - 'A' + 10);
        }
        index++;
    }
    printf("\nThe decimal value of corresponding hexadecimal value is %d\n", decimal);

    int binary = 0, copy_num = decimal, binary_factor = 0;
    while (copy_num >= 1) {
        if (copy_num % 2 != 0) {
            binary = binary + pow(10, binary_factor);
        }
        binary_factor = binary_factor + 1;
        copy_num = copy_num / 2;
    }
    printf("The binary value of corresponding hexadecimal value is %d\n", binary);
    printf("The octal value of corresponding hexadecimal value is %o\n", decimal);
    return 0;
}