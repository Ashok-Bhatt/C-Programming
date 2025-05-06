#include <stdio.h>
int main() {
    int num1, num2, result;
    printf("Enter two integers separated by space:");
    scanf("%d %d",&num1,&num2);
    result = num1+num2;
    printf("\nThe sum of %d and %d is %d.",num1,num2,result);
    return 0;
}
