#include <stdio.h>

int main() {
    int num;
    printf("\n1. Account Opening");
    printf("\n2. Deposite");
    printf("\n3. Withdraw");
    printf("\n4. Balance Enquiry");
    printf("\n5. Account Closing");
    printf("\n6. Account Deactivating\n");

    printf("\nEnter the number:");
    scanf("%d", &num);
    switch (num) {
        case (1):
            printf("Account Opening\n");
            break;
        case (2):
            printf("Deposite\n");
            break;
        case (3):
            printf("Withdraw\n");
            break;
        case (4):
            printf("Balance Enquiry\n");
            break;
        case (5):
            printf("Account Closing\n");
            break;
        case (6):
            printf("Account Deactivating\n");
            break;
        default:
            printf("Invalid Service!\n");
    }
    return 0;
}