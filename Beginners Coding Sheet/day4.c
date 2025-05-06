#include <stdio.h>

int main(void) {

// Question-5
// Write a Program to Check whether a year entered by user is Leap Year or not
    /*
    int year;
    printf("Enter the year:");
    scanf("%d\n",&year);

    if (year%4 != 0){
        printf("%d is not a leap year.",year);
    }
    else{
        if (year%100!=0){
            printf("%d is a leap year.",year);
        }
        else{
            if (year%400==0){
                printf("%d is a leap year.",year);
            }
            else{
                printf("%d is not a leap year.",year);
            }    // End of else statement levl 3
        }    // End of else statement level 2
    }    // End of else statement level 1

    */
    
// Loops

// Question-1
// Write a Program to Calculate Sum of first N Natural Numbers (here value of N is Entered by user)

    unsigned int num, sum=0;
    printf("\nEnter the number:");
    scanf("%d",&num);

    for (int i=1; i<=num; i++){
        sum = sum + i;
    }

    printf("\nThe sum of first %d natural numbers is %d.\n",num,sum);

// Question-2
// Write a Program to Find Factorial of a given number N (N is entered by user)

    unsigned int number, product=1;
    printf("\nEnter the number:");
    scanf("%d",&number);

    for (int i=1; i<=number; i++){
        product = product * i;
    }

    printf("\nThe factorial of %d is %d.\n",number,product);

// Question 3
// Write a Program to Generate Multiplication Table of anumber (entered by the user) using a for loop.

    int table_num;
    printf("\nEnter the number whose multiplication table you want to print:");
    scanf("%d",&table_num);

    for (int i=1; i<=10; i++){
        printf("\n%d X %d = %d",table_num,i,table_num*i);
    }

// Question 4
// Write a Program to Display Fibonacci Series upto nth term (n is entered by user

    int fibo1, fibo2, fibo3, term;

    printf("\nEnter the number of fibonacci terms you want to print:");
    scanf("%d\n",&term);
    
    if(term==1){
        printf("\n0");
    }
    else if(term==2){
        printf("\n0 1");
    }
    else{
        fibo1 = 0;
        fibo2 = 1;
        fibo3 = fibo1 + fibo2;
        printf("\n0 1 ");
        for (int i=3; i<=term; i++){
            fibo1 = fibo2;
            fibo2 = fibo3;
            fibo3 = fibo1 + fibo2;
            printf("%d ",fibo3);
        }
    }

    return 0;
}