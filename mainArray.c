#include <stdio.h>
#include "MylibArray/myLibArray.h"

int main() {
    int n, value, choice;
    
    // Step 1: Get array size
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer for the number of elements.\n");
        return 1;
    }

    int a[n];  // VLA (Variable Length Array)

    // Step 2: Get array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    // Step 3: Menu loop
    do {
        printf("\n=== Menu ===\n");
        printf("1. Display Array\n");
        printf("2. Find Maximum Element\n");
        printf("3. Find Minimum Element\n");
        printf("4. Find Average of Elements\n");
        printf("5. Reverse Array\n");
        printf("6. Sort Array\n");
        printf("7. Search for an Element\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Array elements: ");
                displayArray(a, n);
                break;
            case 2: {
                int maxIndex = MaxIndex(a, n);
                printf("Maximum element is %d at index %d\n", a[maxIndex], maxIndex);
                break;
            }
            case 3: {
                int minIndex = MinIndex(a, n);
                printf("Minimum element is %d at index %d\n", a[minIndex], minIndex);
                break;
            }
            case 4: {
                float avg = Average(a, n);
                printf("Average of array elements is: %.2f\n", avg);
                break;
            }
            case 5:
                reverseArray(a, n);
                printf("Array after reversing: ");
                displayArray(a, n);
                break;
            case 6:
                sortArray(a, n);
                printf("Array after sorting: ");
                displayArray(a, n);
                break;
            case 7:
                printf("Enter value to search: ");
                if (scanf("%d", &value) != 1) {
                    printf("Invalid input. Please enter an integer.\n");
                    return 1;
                }
                int searchIndex = linearSearch(a, n, value);
                if (searchIndex != -1) {
                    printf("Element %d found at index %d\n", value, searchIndex);
                } else {
                    printf("Element %d not found in the array\n", value);
                }
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }

    } while (choice != 0);

    return 0;
}
