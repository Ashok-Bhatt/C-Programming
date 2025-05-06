#include<stdio.h>
#include<stdlib.h>
int main(){
    int* p = malloc(5*sizeof(int));
    for (int i=0; i<5; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", p+i);
    }

    printf("Address: %p\n", p);
    for (int i=0; i<5; i++){
        printf("%d ", p+i);
    }

    p = realloc(p, 10*sizeof(int));
    printf("\n\nAddress: %p\n", p);
    for (int i=0; i<10; i++){
        printf("%d ", p+i);
    }
}