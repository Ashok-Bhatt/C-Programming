#include <stdio.h>

int main(void) {

    char word[25];
    printf("Enter the word:");
    scanf("%s",word);
    
    int character, bit, mask=1;
    printf("\nEnter the character number:");
    scanf("%d", &character);

    if (character<0 || character>24){
        printf("\n\nPlease enter the valid character number:");
    }
    else{
        printf("\nEnter the bit number you want to find:");
        scanf("%d", &bit);
        if (bit <= 0 || bit >= 9) {
        printf("\n\nPlease enter the number in the range 1-8.");
        }
        else{
            int result = word[character] & (mask<<(8-bit));
            if (result){
                printf("\n\nThe bit at position %d is 1.\n",bit);
            }
            else{
                printf("\n\nThe bit at position %d is 0.\n",bit);
            }
        }
    }
        
    return 0;
}