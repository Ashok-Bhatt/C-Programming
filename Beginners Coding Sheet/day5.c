#include <stdio.h>

int main(void) {

// Problem 5
// ) Write a Program to Display Fibonacci Series upto certain number n (n is entered by user)

    int num, fibo1, fibo2, fibo3;

    printf("Enter the number upto which you want to print fibonacci numbers:");
    scanf("%d",&num);

    if (num==0){
        printf("\n0");
    }
    else if(num==1){
        printf("\n0 1 1");
    }
    else{
        fibo1 = 0;
        fibo2 = 1;
        printf("\n%d %d ",fibo1,fibo2);
        fibo3 = fibo1+fibo2;
        while (fibo3<=num){
            printf("%d ",fibo3);
            fibo1 = fibo2;
            fibo2 = fibo3;
            fibo3 = fibo1 + fibo2;
        }
    }

// Problem 6
// Write a Program to Find GCD or HCF of two numbers entered by user

    int num1, num2, smaller, hcf;
    printf("\nEnter the two numbers separated by space whose HCF you want to find:");
    scanf("%d %d",&num1,&num2);

    if (num1<num2){
        smaller = num1;
    }
    else{
        smaller = num2;
    }

    for (int i=1; i<=smaller; i++){
        if (num1%i==0 && num2%i==0){
            hcf = i;
        }
    }

    printf("\nhcf(%d,%d)=%d",num1,num2,hcf);
    
// Problem 7
// Write a Program to Find LCM of two numbers entered by user

    int num_1, num_2, larger;
    printf("\nEnter the two numbers separated by space whose LCM you want to find:");
    scanf("%d %d",&num_1,&num_2);

    if (num_1>num_2){
        larger = num_1;
    }
    else{
        larger = num_2;
    }

    while(1){
        if (larger%num_1==0 && larger%num_2==0){
            break;
        }
        else{
            larger = larger + larger;
        }
    }

    printf("\nlcm(%d,%d)=%d",num_1,num_2,larger);
    
return 0;
}