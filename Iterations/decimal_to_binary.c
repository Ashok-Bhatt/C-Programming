#include <stdio.h>
#include <math.h>
int main(){
    int decimal,binary=0, power=0;
    printf("Enter the decimal number:");
    scanf("%d",&decimal);
    int dec_copy = decimal;
    while(dec_copy!=0){
        binary = binary+ (pow(10,power) * (dec_copy%2));
        dec_copy = dec_copy/2;
        power = power + 1;
    }
    printf("\nThe binary value of decimal number %d is %d.\n",decimal,binary);

    return 0;
}