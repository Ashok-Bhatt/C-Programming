#include <stdio.h>

int main() {
    unsigned int num, product = 1;
    printf("Enter the number:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        product = product * i;
    }
    printf("\n%d! = %d", num, product);
    return 0;
}