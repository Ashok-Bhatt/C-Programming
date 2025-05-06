// Read two integers and print their sum
#include <stdio.h>

void main(){
    int a, b, sum;
    printf("Enter numbers: ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("Sum of %d and %d: %d", a, b, sum);
}