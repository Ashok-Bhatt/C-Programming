#include <stdio.h>

int main() {
    int percentage;
    printf("Enter the percentage of the student:");
    scanf("%d",&percentage);
    if (percentage >= 70)
        printf("\nDistinction");
    else if (percentage >= 60)
        printf("\nFirst");
    else if (percentage >= 50)
        printf("\nSecond");
    else if (percentage >= 40)
        printf("\nPass");
    else
        printf("\nFail");
    return 0;
}
