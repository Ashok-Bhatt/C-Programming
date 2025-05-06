#include <stdio.h>

int fun(int x){
    if (x>3)
    return fun(x-4)+fun(x-1)+1;
    return 1;
}

int main(){
    printf("%d", fun(12));
}