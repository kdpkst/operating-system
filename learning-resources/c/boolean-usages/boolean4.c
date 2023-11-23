#include <stdio.h>

// create a new data type named bool using an enumeration
// define two constants true and false, which are equivalent to the integer values 1 and 0
typedef enum { false, true } bool;

int main(void){
    bool t = true;
    bool f = false;

    if (t){
        printf("It will print!\n");
    }

    if (!f){
        printf("It will print!\n");
    }

    return 0;
}