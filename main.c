#include <stdio.h>
#include "isArmstrong.c"
#include "isAdamNumber.c"
int main() {
    int bln = isArmstrong(153);
    if(bln){
        printf("153 is an Armstrong number.\n");
    } else {
        printf("153 is not an Armstrong number.\n");
    }

    int bln2 = isAdamNumber(12);
    if(bln2){
        printf("12 is an Adam number.\n");
    } else {
        printf("12 is not an Adam number.\n");
    }
    return 0;
}