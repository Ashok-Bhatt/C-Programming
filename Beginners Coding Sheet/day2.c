#include <stdio.h>

int main(void) {

// Problem-6
// Write a Program to Swap Two Numbers

    int a = 10, b = 20, c;

    printf("Value of a before swapping:%d",a);
    printf("\nValue of b before swapping:%d",b);
    
    c = a;
    a = b;
    b = c;

    printf("\nValue of a after swapping:%d",a);
    printf("\nValue of b after swapping:%d\n",b);

// Problem-7
// Write a Program to Find ASCII Value of a Character

    char character;

    printf("\nEnter the character:");
    scanf("%c",&character);

    printf("\nThe entered character is %c and the corresponding %d\n",character,character);

// Problem-8
// Write a Program to Multiply two decimal Numbers entered by User

    float decimal1, decimal2, product;
    printf("\nEnter the first decimal number:");
    scanf("%f",&decimal1);
    printf("Enter the second decimal number:");
    scanf("%f",&decimal2);
    product = decimal1*decimal2;

    printf("Multiplication of %f and %f is %f\n",decimal1, decimal2, product);

// If Else Questions

// Questions-1
// Write a Program to Check Whether Number is Even or Odd

    int new_num;
    printf("\nEnter the number:");
    scanf("%d",&new_num);

    if (new_num%2){
        printf("\n%d is an odd number.",new_num);
    }
    else{
        printf("\n%d is an even number.\n",new_num);
    }

// Question-2
// Write a Program to Check Whether a Character is Vowel or Consonant.

    char ch='e';

    if ((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u')){
        printf("\nEntered character is a vowel.\n");
    }
    else{
        ch = ch - 32;
        if ((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u')){
            printf("\nEntered character is a vowel.\n");
        }
        else{
            printf("\nEntered character is a consonent\n.");
        }
    }

// Question-3
//  Write a Program to Find Largest Number Among Three Numbers entered by users

    int num1, num2, num3;

    printf("\nEnter the first integer:");
    scanf("%d",&num1);
    printf("\nEnter the second integer:");
    scanf("%d",&num2);
    printf("\nEnter the third integer:");
    scanf("%d",&num3);

    if (num1>num2 & num1>num3){
        printf("%d is the largest number.",num1);
    }
    else if (num2 > num3){
        printf("%d is the largest number.",num2);
    }
    else{
        printf("%d is the largest number.",num3);
    }
    
    return 0;
}