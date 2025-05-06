#include <stdio.h>
#include <math.h>

int main(void) {

// Problem 4
// Write a Program which accepts coefficients of a quadratic equation from the user and displays the roots (both real and complex roots depending upon the discriminant)

    int square, linear, constant;
    float discriminant, root1, root2, imaginary1, imaginary2;

    printf("Enter the square, linear and constant coefficients of a quadratic equation separated by comma:");
    scanf("%d %d %d",&square,&linear,&constant);

    discriminant = ((linear*linear)-4*square*constant);

    if (discriminant>=0){
        root1 = (-linear - sqrt(discriminant))/(2*square);
        root2 = (-linear + sqrt(discriminant))/(2*square);

        printf("The roots of equation: %dx^2 + %dx + %d are %f and %f.",square, linear, constant, root1, root2);
    }

    else {
        discriminant = -discriminant;
        root1 = -linear/2*square;
        imaginary1 = sqrt(discriminant)/2*square;
        root2 = -linear/2*square;
        imaginary2 = -sqrt(discriminant)/2*square;

        printf("The roots of equation: %dx^2 + %dx + %d are %f+%fi and %f+%fi.",square, linear, constant, root1, imaginary1, root2, imaginary2);
    }
return 0;
}