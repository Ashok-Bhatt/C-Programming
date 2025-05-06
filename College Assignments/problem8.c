#include <stdio.h>
int main() {
    float radius, circumference, area;
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);
    
    circumference = 2*3.14*radius;
    area = 3.14*radius*radius;
    printf("\nThe circumference and area of the circle are %f and %f",circumference,area);
    return 0;
}
