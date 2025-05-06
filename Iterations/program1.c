#include <stdio.h>
int main(){
    int i, j, n=32, count=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            count++;
    printf("%d", count);
    return 0;
}