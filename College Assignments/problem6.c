#include <stdio.h>
int main() {
    float num1, num2, sum, difference, product;
    printf("Enter two numbers separated by space:");
    scanf("%f %f",&num1,&num2);
    sum = num1+num2;
    difference = num1-num2;
    product = num1*num2;
    
    printf("\n%f+%f = %f.",num1,num2,sum);
    printf("\n%f-%f = %f.",num1,num2,difference);
    printf("\n%f*%f = %f.",num1,num2,product);
    return 0;
}
