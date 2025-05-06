#include<stdio.h>

void fun(int* p){
    ++*p++;
}

void main(){
    int arr[4] = {10,20,30,40};
    fun(arr);
    for (int i=0; i<4; i++){
        printf("%d ", arr[i]);
    }
}