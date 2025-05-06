#include <stdio.h>

int main() {
    float celsius, farhenheit;
    printf("Enter the temperature in farhenheit:");
    scanf("%f",&farhenheit);
    celsius = (farhenheit-32)*5/9;
    printf("\nThe celsius conversion of %f degree farhenheit is %f .",farhenheit,celsius);
    return 0;
}
