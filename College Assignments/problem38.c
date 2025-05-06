#include <stdio.h>

int main() {
    int num;
    while (1) {
        printf("\nEnter the number:");
        scanf("%d", &num);
        if (num % 2 != 0) {
            printf("\nYou did not enter the even number.\n");
        } else {
            printf("\nYes! You have entered the even number.\n");
            break;
        }
    }
    return 0;
}