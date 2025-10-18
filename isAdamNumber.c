#include <stdio.h>
int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
int isAdamNumber(int num) {
    

    int square = num * num;
    int revNum = reverse(num);
    int revSquare = reverse(revNum);
    revSquare = revSquare * revSquare;

    return square == revSquare;
}