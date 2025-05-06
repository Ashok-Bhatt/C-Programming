#include <stdio.h>

int main() {
    unsigned int num, sum = 0;
    printf("Enter the number:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
        sum = sum + i;
    printf("\nThe sigma of %d is %d.", num, sum);
    return 0;
}
