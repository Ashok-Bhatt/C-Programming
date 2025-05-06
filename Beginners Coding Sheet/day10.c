#include <stdio.h>
#include <math.h>

int main(void) {

/*
// Question 1:
Write a Program that takes N elements (max. value of N is 100
and N is the float number specified by user) from user, stores data
in an array and Calculates the average of those numbers.

    float number[4], sum=0.0;
    printf("\n");
    for (int i=0; i<4; i++){
        printf("Enter the element #%d:",i+1);
        scanf("%f",&number[i]);
        sum = sum + number[i];
    }
    printf("The avearge of all elements of array is %f.",sum/4);
    */

/*     
// Question 2:
// Write a Program that takes n element from user and displays the largest element of an array
    int array[20], n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        printf("\nEnter the element no. %d: ",i+1);
        scanf("%d",&array[i]);
    }
    int largest=array[0];
    for (int i=1; i<n; i++){
        if(array[i]>largest){
            largest = array[i];
        }
    }
    printf("\nThe largest element in an array is %d",largest);
     */

    /* 
    //Question 3
    //  Write a Program that calculates the standard deviation of 10 data using arrays
    int array[20],sum=0;
    for (int i=0; i<10; i++){
        printf("\nEnter the element no. %d: ",i+1);
        scanf("%d",&array[i]);
        sum = sum + array[i];
    }

    int mean=sum/10, diff;
    float sd;
    for (int i=0; i<10; i++){
        diff = (array[i]-mean)*(array[i]-mean);
    }
    sd = pow(diff/9,0.5);
    printf("\nThe standard deviation is %f",sd);
     */

/* 
    // Question 4
    // Write a Program that takes the array of five element and the elements of that array are accessed using pointer.

    int array1[5];
    int* first = array1;
    
    for (int i=0; i<5; i++){
        printf("\nEnter Element #%d: ",i+1);
        scanf("%d",&array1[i]);
    }

    for (int i=0; i<5; i++){
        printf("\nElement #%d: %d",i+1,*(first+i));
    }
 */


    // Question 5
    // Write a Program that adds two matrices using Multi-dimensional Arrays where the number of rows r and columns c is entered by user (Value of r and c < 100)

    int first[100][100], second[100][100], third[100][100];
    int row, column;

    printf("\nEnter the number of rows and columns:");
    scanf("%d %d",&row,&column);

    printf("\nMatrix 1:");
    for (int i=0; i<row; i++){
        printf("\nEnter the elements of row #%d separated by space:\n",i+1);
        for (int j=0; j<row; j++){
            scanf("%d ",&first[i][j]);
        }
    }

    printf("\nMatrix 2:");
    for (int i=0; i<row; i++){
        printf("\nEnter the elements of row #%d separated by space:\n",i+1);
        for (int j=0; j<column; j++){
            scanf("%d ",&second[i][j]);
            third[i][j] = first[i][j] + second[i][j];
        }
    }

    printf("\n\nMatrix1");
    
return 0;
}