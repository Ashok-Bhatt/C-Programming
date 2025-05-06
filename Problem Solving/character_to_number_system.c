#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {

    char character, mask=1;
    int binary_string[8];
    printf("\nEnter the character:");
    scanf("%c",&character);
        
    for (int i=1; i<=8; i++){
        if ((character & mask) == 0){
            binary_string[8-i] = 0;
        }
        else{
            binary_string[8-i] = 1;
        }
        mask = mask<<1;
    }

    printf("\nBinary Representation: ");
    for (int i=0; i<=7; i++){
        printf("%d",binary_string[i]);
    }

    int decimal = character;
    printf("\nDecimal Represenration: %d",decimal);

    int octal = 0, dec_copy = decimal, power = 0;
    while (dec_copy>0){
        octal = octal + pow(10,power)*(dec_copy%8);
        dec_copy = dec_copy / 8;
        power++;
    }
    printf("\nOctal Represenration: %d",octal);

    int hexadecimal[10];
    int digit=9;
    char result;
    dec_copy = decimal;
    
    while (dec_copy>0){
        
        hexadecimal[digit] = dec_copy%16;
        dec_copy = dec_copy / 16;
        digit--;
    }
    
    printf("\nHexadecimal Representation:");
    for (int i=digit+1; i<=9; i++){
        if (hexadecimal[i]>=0 && hexadecimal[i]<=9){
            printf("%d",hexadecimal[i]);
        }
        else{
            result = hexadecimal[i] - 10 + 97;
            printf("%c",result);
        }
    }
    
return 0;
}