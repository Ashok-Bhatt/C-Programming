#include <stdio.h>

int main() {
    int num, count = 1;
    while (count <= 4) {
        printf("\nEnter the number:");
        scanf("%d", &num);
        if (num % 2 != 0) {
            printf("\nYou have entered the wrong number.\n");
        } else {
            printf("\nYes! You have entered the even number.\n");
            break;
        }
        count++;
    }
    return 0;
}