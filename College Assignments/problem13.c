#include <stdio.h>

int main() {
    int gram;
    float kilogram;
    printf("Enter the gram measure:");
    scanf("%d",&gram);
    kilogram = gram/1000.0;
    printf("%d grams = %f kilograms",gram, kilogram);
    return 0;
}
