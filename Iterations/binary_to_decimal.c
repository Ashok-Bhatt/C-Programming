#include <stdio.h>
#include <math.h>

int main(){
    unsigned int binary, power=0, decimal=0;
    printf("Enter the binary number:");
    scanf("%d",&binary);
    int bin_copy = binary;
    while(bin_copy!=0){
        decimal = decimal + (bin_copy%10)*pow(2,power);
        bin_copy = bin_copy / 10;
        power = power + 1;
    }
    printf("\nThe decimal value of binary number %d is %d.\n",binary,decimal);

    return 0;
}