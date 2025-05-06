#include<stdio.h>
int main(){
    int arr[4];
    int *p, *q;
    p = &arr[0];
    q = &arr[3];
    printf("%d\n", q-p);
    printf("%d\n", p-q);
}