#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Enter the temperature in Celsius:");
    scanf("%f",&celsius);
    fahrenheit = (9*celsius)/5 + 32;
    printf("\nThe Fahrenheit conversion of %f degree Celsius is %f.",celsius,fahrenheit);
    return 0;
}
