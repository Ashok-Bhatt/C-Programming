#include <stdio.h>

int main(void) {
    
    int length, height;
    printf("Enter the lenght and height of a pattern separated by space:");
    scanf("%d %d",&length,&height);
    
    printf("\n");

    // Pattern-2
    for (int i=0; i<height; i++){
        for (int j=0; j<i; j++){
            if (i==0 || i==height-1 || j==0 || j==length-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");
    
    // Pattern-3
    for (int i=1; i<=height; i++){
        for (int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // Pattern-4
    for (int i=height; i>=1; i--){
        for (int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // Pattern-8
    for (int i=1; i<=height; i++){
        for (int j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }

    printf("\n");
    
    return 0;
}