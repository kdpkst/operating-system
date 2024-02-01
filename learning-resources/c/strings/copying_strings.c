#include <stdio.h>
#include <string.h>

void compile_error();
void strcpy_example();

int main(void){
    // compile_error();
    strcpy_example();

    return 0;
}

// operator = can copy integers, but it only saves the address (pointer) of a string
void compile_error(){
    char x[] = "abcd";
    char *a, b[5];
    // compiled because char *a is used
    a = x;
    printf("%s\n", a);
    // compile error occurs, cannot assign to an array in C
    b = x;
    printf("%s\n", b);
}

void strcpy_example(){



}