#include <stdio.h>

int main() {
    char character;
    printf("Enter the character:");
    scanf(" %c",&character);

    if ((int)character >= 48 && (int)character <= 57)
        printf("\n%c is a digit.",character);
    else if ((int)character >= 65 && (int)character <= 90)
        printf("\n%c is an uppercase character.",character);
    else
        printf("\n%c is a lowercase character.",character);
    return 0;
}
