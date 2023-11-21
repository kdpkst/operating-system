#include <stdio.h>

int addition(int x, int y);

int main(void){
    int a = 5, b = 10;
    // declare a pointer to a function that takes two int parameters and returns an int
    int (*fn)(int, int) = &addition;
    // the following two are equivalent
    printf("%d\n", (*fn)(a, b));
    printf("%d\n", fn(a, b));
    // direct function call
    printf("%d\n", addition(a, b));
    
    return 0;
}

int addition(int x, int y){
    return x + y;
}