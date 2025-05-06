#include <stdio.h>
int main() {
    int num1, num2, sum, difference, product;
    printf("Enter two integers separated by space:");
    scanf("%d %d",&num1,&num2);
    sum = num1+num2;
    difference = num1-num2;
    product = num1*num2;
    
    printf("\n%d+%d = %d.",num1,num2,sum);
    printf("\n%d-%d = %d.",num1,num2,difference);
    printf("\n%d*%d = %d.",num1,num2,product);
    return 0;
}
