#include<stdio.h>
int main(){

    switch (2){
        case 1: printf("1\n");
        // Hello will not run until it is placed above the case that matches the expression
        case 2: printf("2\n");
        printf("hello\n");
        case 3: printf("3\n");
        case 4: printf("4\n");
        case 5: printf("5\n");
        case 6: printf("6\n");
    }
}