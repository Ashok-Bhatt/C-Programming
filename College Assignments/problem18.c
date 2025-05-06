#include <stdio.h>

int main() {
    int percentage, x;
    printf("Enter the percentage of the student:");
    scanf("%d",&percentage);
    x = percentage / 10;
    switch(x) {
        case 0: case 1: case 2: case 3:
            printf("\nFail");
            break;
        case 4:
            printf("\nPass");
            break;
        case 5:
            printf("\nSecond");
            break;
        case 6:
            printf("\nFirst");
            break;
        default:
            printf("\nDistinction");
            break;
    }
    return 0;
}
