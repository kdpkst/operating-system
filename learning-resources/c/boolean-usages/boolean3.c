#include <stdio.h>

// _Bool is a native C data type after C99
// _Bool is an integer type but has special rules for conversions from other types
int main(void){
    _Bool t = 1;
    _Bool f = 0;

    if (t){
        printf("It will print!\n");
    }

    if (!f){
        printf("It will print!\n");
    }

    return 0;
}