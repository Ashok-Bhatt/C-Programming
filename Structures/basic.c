#include <stdio.h>
#include <string.h>

struct student{
    int no;
    char name[25];
};

int main(){
    struct student s1 = {1,"Ashok"};
    struct student s2 = {2,"Vijay"};
    printf("\nStudent[%d] = %s", s1.no, s1.name);
    printf("\nStudent[%d] = %s", s2.no, s2.name);
    return 0;
}