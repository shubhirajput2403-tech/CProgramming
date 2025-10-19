#include <stdio.h>
//Function to reverse digits of a number
int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}
//Function to check if a number is an Armstrong number
#include <math.h>
int isArmstrong(int number) {
    int originalNumber, remainder, result = 0, n = 0;

    originalNumber = number;

    while (originalNumber != 0) {
        originalNumber /= 10;
        n++;
    }

    originalNumber = number;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    return (result == number);
}
//Function to check if a number is an Adam number
int isAdamNumber(int num) {  
    
    int square = num * num;
    int revNum = reverse(num);
    int revSquare = reverse(revNum);
    revSquare = revSquare * revSquare;

    return square == revSquare;
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
int ispalindrome(int n) {
    int rev = 0;
    int original = n;
    while (n>0) {
        rev = n%10;
        rev = rev*10; 
        n = n/10;
    }
    return rev == original;
}
