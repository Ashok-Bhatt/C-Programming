#include <stdio.h>
#include <limits.h>
int main(void) {

    int array[10] = {1,2,4,7,12,9,34,-3,7,45};
    int minimum = INT_MAX, maximum = INT_MIN;

    for (int i=0; i<10; i++){
        if (array[i]<minimum){
            minimum = array[i];
        }
        if (array[i]>maximum){
            maximum = array[i];
        }
    }

    printf("\nThe maximum number in an array: %d",maximum);
    printf("\nThe minimum number in an array: %d",minimum);
    
return 0;
}