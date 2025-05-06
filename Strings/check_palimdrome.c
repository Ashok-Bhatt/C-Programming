#include <stdio.h>
#include <string.h>

int main(void) {
    
    char string[20];

    printf("Enter the string:");
    scanf("%s",string);

    int i=0, j=strlen(string)-1, flag=1;        // Don't forgot to use <string.h>

    while (i<j){
        if (string[i]!=string[j]){
            flag = 0;
            break;
        }
        else{
            i++;
            j--;
        }
    }

    if (flag==0){
        printf("\nGiven string is not a palimdrome.");
    }
    else{
        printf("\nGiven string is a palimdrome.");
    }
    
    return 0;
}