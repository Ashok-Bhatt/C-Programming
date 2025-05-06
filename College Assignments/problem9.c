#include <stdio.h>
#include <math.h>
int main() {
    float side, circumference, area;
    printf("Enter the side of square:");
    scanf("%f",&side);

    circumference = 4*side;
    area = pow(side,2);
    printf("\nThe circumference and area of the square are %f and %f",circumference,area);
    return 0;
}
