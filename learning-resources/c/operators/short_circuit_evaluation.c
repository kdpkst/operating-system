#include <stdio.h>

int print_integer(int n);

// ﬁrst operand is false when using && 
// ﬁrst operand is true when using || 
// the second operand will not be evaluated
int main(void){
    int a = 20;

    // print_integer(a) is not called since a != 20 is false. 
    if (a != 20 && print_integer(a)){
        printf("I won't be printed.");
    }

    // print_integer(a) is called since a == 20 is true
    if (a == 20 && print_integer(a)){
        printf("I will be printed!");
    }

    return 0;
}


int print_integer(int n){
    printf("print integer %d\n", n);
    return n;
}