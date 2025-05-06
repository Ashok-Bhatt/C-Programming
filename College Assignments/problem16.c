#include <stdio.h>

int main() {
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if (num%2)
        printf("\n%d is an odd number.",num);
    else
        printf("\n%d is an even number.",num);
    return 0;
}
