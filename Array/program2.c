#include<stdio.h>
int main(){
    int a[5];
    int b[5] = {0};

    for (int i=0; i<5; i++){
        printf("%d       %d \n",a[i], b[i]);
    }
}