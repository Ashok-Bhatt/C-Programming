#include <stdio.h>

void f1(){
    extern int i;
    ++i;
}

void f2(){
    extern int i;
    ++i;
}

int i = 10;
void main(){
    ++i;
    printf("i = %d", i);
}