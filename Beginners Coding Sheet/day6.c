#include <stdio.h>
#include <math.h>

int main(void) {
 
// Problem 8
// Write a Program to Reverse a given Number N by user

    /*
    int num, num_copy, reverse=0;

    printf("Enter the number:");
    scanf("%d",&num);
    
    num_copy=num;
    while (num_copy!=0){
        reverse = reverse*10 + num_copy%10;
        num_copy = num_copy/10;
    }
    printf("\nThe reverse of %d is %d.",num,reverse);
    */

// Problem 9
// Write a Program to display sum of all digits of a given Number N by user

    /*
    int num, num1, sum=0;
    printf("Enter the number:");
    scanf("%d",&num);

    num1 = num;
    while (num1!=0){
        sum = sum + (num1%10);
        num1 = num1/10;
    }
    printf("The sum of digits of %d is %d.",num,sum);

    */
    
// Problem 10

// Write a Program to Calculate Power of a Number using inbuilt pow() function by taking two inputs from users as Base and exponent respectively

    /*
    int base,exponent,power=1;

    printf("Enter the base and power separated by space:");
    scanf("%d %d",&base,&exponent);

    power = pow(base,exponent);
    printf("\n%d^%d = %d",base,exponent,power);
*/
    
// Problem 11
// Write a Program to Calculate Power of a Number without using inbuilt pow() function by taking two inputs from users as Base and exponent respectively

    /*
    int base1,exponent1,power1=1;
    printf("\nEnter the base and power separated by space:");
    scanf("%d %d",&base1,&exponent1);

    for (int i=1;i<=exponent1; i++){
        power1 = power1*base1;
    }

    printf("\n%d^%d = %d",base1,exponent1,power1);
    */
    
// Problem 12
// Write a Program to Check Whether a Number N entered by user is Palindrome or Not

    /*
    int num, num_copy, reverse=0;

    printf("Enter the number:");
    scanf("%d",&num);
    
    num_copy=num;
    while (num_copy!=0){
        reverse = reverse*10 + num_copy%10;
        num_copy = num_copy/10;
    }

    if (num==reverse){
        printf("\n%d is a palimdrome number.",num);
    }
    else{
        printf("\n%d is not a palimdrome number.",num);
    }
    */
    
// Problem 13
// Write a Program to Check Whether a Number is Prime or Not

    /*
    int num, flag=0;
    printf("Enter a number:");
    scanf("%d",&num);

    if (num<=0){
        printf("\nThe concept of prime and composite numbers is only applicable for natural numbers.");
    }
    else if (num==1){
        printf("\n1 is neither a prime number nor a commposite number.");
    }
    else if (num==2){
        printf("\n2 is a prime number.");
    }
    else{
        if (num%2==0){
            printf("\n%d is not a prime number.",num);
        }
        else{
            for (int i=3; i<num; i++){
                if (num%i==0){
                    flag=1;
                    break;
                }
            }
            if (flag==0){
                printf("\n%d is a prime number.",num);
            }
            else{
                printf("\n%d is a not prime number.",num);
            }
        }
    }
    */

// Problem 16
// Write a Program to Display all Factors of a Number entered by User

    /*
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    printf("\nThe factors of %d is/are: ");
    for (int i=1; i<=num; i++){
        if (num%i==0){
            printf("%d ",i);
        }
    }
    */
    
  return 0;
}