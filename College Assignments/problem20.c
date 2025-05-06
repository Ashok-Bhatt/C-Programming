#include <stdio.h>

int main() {
    char character;
    int upper, lower;
    printf("Enter the alphabetic character:");
    scanf(" %c",&character);

    upper = (character=='A' || character=='E' || character=='I' || character=='O' || character=='U');
    lower = (character=='a' || character=='e' || character=='i' || character=='o' || character=='u');

    if (lower || upper)
        printf("\nVOWEL");
    else
        printf("\nCONSONANT");
    return 0;
}
