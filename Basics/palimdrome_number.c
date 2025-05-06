#include <stdio.h>

int main(){
    
    int num, copy, reverse=0;

    printf("Enter the number:");
    scanf("%d",&num);
    
    copy = num;

    while (copy>0){
        reverse = reverse*10 + copy%10;
        copy = copy/10;
    }

    if (reverse==num){
        printf("\nEntered number is a palimdrome.");
    }
    else{
        printf("\nEntered number is not a palimdrome.");
    }

}