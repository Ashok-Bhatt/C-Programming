#include <stdio.h>

int main(void) {

  int length, height, choice;
  printf("Enter the choice number, length and height of pyramid separated by "
         "space:");
  scanf("%d %d %d", &choice, &length, &height);

  printf("\n");

  // Pattern 1

  if (choice == 1) {
    for (int i = 1; i <= height; i++) {
      for (int j = 1; j <= length; j++) {
        printf("*");
      }
      printf("\n");
    }
  }

  // Pattern 2

  if (choice == 2) {
    for (int i = 1; i <= height; i++) {
      for (int j = 1; j <= length; j++) {
        if (i == 1 || i == height) {
          printf("*");
        } else {
          if (j == 1 || j == length) {
            printf("*");
          } else {
            printf(" ");
          }
        }
      }
      printf("\n");
    }
  }

  // Pattern 3

  if (choice == 3) {
    for (int i = 1; i <= height; i++) {
      for (int j = 1; j <= i; j++) {
        printf("*");
      }
      printf("\n");
    }
  }

  // Pattern 4

  if (choice == 4) {
    for (int i = height; i >= 1; i--) {
      for (int j = 1; j <= i; j++) {
        printf("*");
      }
      printf("\n");
    }
  }

  // Pattern 5

  if (choice == 5) {
    for (int i = 1; i <= height; i++) {
      for (int j = 1; j <= height; j++) {
        if (i + j >= (height + 1)) {
          printf("* ");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
  }

  // Pattern 6

  if (choice == 6) {
    for (int i = 1; i <= height; i++) {
      for (int j = 1; j <= height; j++) {
        if (i - j >= 1) {
          printf(" ");
        } else {
          printf("* ");
        }
      }
      printf("\n");
    }
  }

  // Pattern 7

  if (choice == 7) {
    for (int i = 1; i <= height; i++) {
      for (int j = 1; j <= height; j++) {
        if (i == 1 || i == height) {
          printf("* ");
        } else if (j == height || i + j == height + 1) {
          printf("* ");
        } else {
          printf("  ");
        }
      }
      printf("\n");
    }
  }

  // if (choice==7){
  //     for(int i=0; i<=height; i++){
  //         for(int j=0;j<=height-i;j++){
  //             printf(" ");
  //         }
  //         for(int k=0; k<=i;k++){
  //             printf(" *");
  //         }
  //         printf("\n");
  //     }
  // }
  return 0;
}