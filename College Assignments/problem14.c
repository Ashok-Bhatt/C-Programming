#include <stdio.h>

int main() {
    int a = 12,b = 24,c;
    printf("Before swapping:\na=%d, b=%d\n",a,b);
    c = a;
    a = b;
    b = c;
    printf("\nAfter swapping:\na=%d, b=%d\n",a,b);
    return 0;
}
