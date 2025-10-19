#include <stdio.h>
#include <math.h>
//Function to reverse digits of a number
int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int isArmstrong(int number) {
    int originalNumber = number, remainder, result = 0, n = 0;

    // Count digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        n++;
    }

    originalNumber = number;

    // Sum of powers
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += (int)(pow(remainder, n) + 0.5);  // Rounding avoids float precision errors
        originalNumber /= 10;
    }

    return (result == number);
}

//Function to check if a number is an Adam number

int isAdamNumber(int num) {
    int originalSquare = num * num;
    int reversedNum = reverse(num);
    int reversedSquare = reversedNum * reversedNum;
    int reversedOriginalSquare = reverse(originalSquare);

    return reversedSquare == reversedOriginalSquare;
}

//Function to check if a number is prime
int isPrime(int n){

    if(n <= 1) return 0;
    for (int i = 2; i*i <= n; i++){
        if (n % i == 0)
            return 0;
    }
    return 1;
}
//Function to check if a number is prime and palindrome
int isPalindrome(int n) {
    int original = n, rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev == original;
}

