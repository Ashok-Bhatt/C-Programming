#include<stdio.h>
int Add(int x, int y){
    return x+y;
}

int main(){
    int (*p)(int,int);
    p = Add;
    printf("%d", (*p)(10,20));
}