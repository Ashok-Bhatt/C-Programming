#include <stdio.h>
#include <math.h>

int main(void) {

// Problem 14
// Write a Program to Display Prime Numbers Between Two Intervals (entered by user

    /*
    int num1, num2;

    printf("Enter the two numbers separated by space:");
    scanf("%d %d",&num1,&num2);
    
    if (num2<num1){
        printf("\nInvalid Range! The second number should be greater than the first one.");
    }
    else if (num1<=0 || num2<=0){
        printf("\nThe numbers shoud be greater than 1");
    }
    else if (num1==1 && num2==1){
        printf("\nNo prime numbers in a given range.");
    }
    else{
        printf("\nThe prime numbers in the range %d and %d are: ",num1,num2);
        for (int num=num1; num<=num2; num++){
            if (num==1){
                continue;
            }
            int flag = 0;
            for (int i=2; i<num; i++){
                if (num%i==0){
                    flag=1;
                    break;
                }
            }
            if (flag==0){
                printf("%d ",num);
            }
        }
    }
    */
        
// Problem 15
// Write a Program to check whether a number entered by the user is an Armstrong number or not.

    int num, num_copy, length=0, sum=0;

    printf("Enter the number:");
    scanf("%d",&num);

    num_copy=num;

    while (num_copy > 0){
        num_copy = num_copy/10;
        length++;
    }

    num_copy = num_copy + num;

    for (int i=num_copy; i>0; i=i/10){
        sum = sum + pow((i%10),length);
    }

    if (sum==num){
        printf("\n%d is a palimdrome number.",num);
    }
    else{
        printf("\n%d is not a palimdrome number.",num);
    }
    
// Pattern Printing

// Pattern-1
    /*
    
    int length, breadth;

    printf("Enter the length and breadth of a rectangle separated by space:");
    scanf("%d %d",&length,&breadth);

    for (int i=1; i<=breadth; i++){
        for (int j=1; j<=length; j++){
            printf("*");
        }
        printf("\n");
    }
    */
    
    return 0;
}