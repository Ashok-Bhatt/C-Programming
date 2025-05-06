#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the two numbers separated by space:");
    scanf("%d %d",&a,&b);
    if (a > b)
        printf("\na is greater than b.");
    else if (b > a)
        printf("\nb is greater than a.");
    else
        printf("\na is equal to b.");
    return 0;
}
