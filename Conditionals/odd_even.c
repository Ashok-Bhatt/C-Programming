#include <stdio.h>
int main(){
    int num;
    printf("\nenter the number:");
    scanf("%d",&num);
    if (num%2==0){
        printf("\n%d is even number:",num);
    }
    else{
        printf("\n%d is a odd number:",num);
    }
    return 0;
}