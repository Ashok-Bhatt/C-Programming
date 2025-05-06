#include <stdio.h>

int main() {
    int kilogram, gram;
    printf("Enter the kilogram measure:");
    scanf("%d",&kilogram);
    gram = kilogram*1000;
    printf("\n%d kilograms = %d grams",kilogram,gram);
    return 0;
}
