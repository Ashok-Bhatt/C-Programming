#include <stdio.h>
int main() {
    char character;
    printf("Enter any character:");
    scanf(" %c",&character);
    printf("\nThe entered character is %c and its corresponding ASCII value is %d.",character,character);
    return 0;
}
