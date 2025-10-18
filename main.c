#include <stdio.h>
#include "isArmstrong.c"
int main() {
    int bln = isArmstrong(153);
    if(bln){
        printf("153 is an Armstrong number.\n");
    } else {
        printf("153 is not an Armstrong number.\n");
    }
    return 0;
}