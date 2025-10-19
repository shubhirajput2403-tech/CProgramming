#include <stdio.h>
#include "Mylib/myLib.h"

int main() {
    int choice,number;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Check Armstrong Number\n");
        printf("2. Check Adams Number\n");
        printf("3. Check Prime Palindrome Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) break;

        printf("Enter a number: ");
        scanf("%d", &number);
        switch (choice) {
            case 1:
                if (isArmstrong(number))
                    printf("%d is an Armstrong number.\n", number);
                else
                    printf("%d is not an Armstrong number.\n", number);
                break;
            case 2:
                if (isAdamNumber(number))
                    printf("%d is an Adam number.\n", number);
                else
                    printf("%d is not an Adam number.\n", number);
                break;
            case 3:
                if (isPalindrome(number) && isPrime(number))
                    printf("%d is a Prime Palindrome number.\n", number);
                else
                    printf("%d is not a Prime Palindrome number.\n", number);
                break;
            default:
                printf("Invalid choice! Please select between 1-4.\n");
        }
    } while (choice != 4);    
printf("Exiting the program.\n");
    return 0;
}
