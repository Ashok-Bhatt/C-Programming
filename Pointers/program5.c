#include<stdio.h>
int main(){
    int a = 10;
    void *p;
    p = &a;
    printf("%d", *(int*)(p));
}