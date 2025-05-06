#include <stdio.h>

int main() {

// Program-1
// Write a Program to print "Hello, World!"
  printf("Hello, World!\n");

// Program-2
//  Write a Program to Print Integer Number Entered by User
    int num;
    printf("\nEnter the number:");
    scanf("%d",&num);
    printf("\nYou have entered %d.\n",num);

// Program-3
// Write a Program to Add Two Integer Numbers Entered by User

    int num1, num2, result;
    printf("\nEnter the first number:");
    scanf("%d",&num1);
    printf("\nEnter the second number:");
    scanf("%d",&num2);

    result = num1 + num2;
    printf("\nThe sum of %d and %d is %d\n",num1,num2,result);

// Program-4
// Write a program where the user is asked to enter two integers (divisor and dividend) and the quotient and the remainder of their division is computed.(Both divisor and dividend should be integers.)

    int dividend, divisor;
    printf("\nDividend:");
    scanf("%d",&dividend);
    printf("\nDivisor:");
    scanf("%d",&divisor);
    printf("\nQuotient:%d \nRemainder:%d\n", dividend/divisor, dividend%divisor);

// Program-5
// Write a Program to Find Size of int, float, double and char in your computer

    int number=23;
    char character='w';
    float floating=2.222200;
    double pointing=2.44947343400000;
    
    printf("\nThe size of %d is %d byte.",number,sizeof(number));
    printf("\nThe size of %d is %d byte.",character,sizeof(character));
    printf("\nThe size of %d is %d byte.",floating,sizeof(floating));
    printf("\nThe size of %d is %d byte.",pointing,sizeof(pointing));
    
  return 0;
}