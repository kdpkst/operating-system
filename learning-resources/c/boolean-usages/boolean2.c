#include <stdio.h>

/*
 * C of all versions, will effectively treat any integer value other than 0 as true and 0 as false
 * #define is used to create macros which allow constant values to be declared for use throughout the code
 * macro definitions are not variables and cannot be changed by the program code like variables
 * the general syntax: #define CNAME value
 * but be careful that the deﬁnition of these macros might clash with modern uses of <stdbool.h>
 */

// bool is defined as int
#define bool int
// true is defined as 1
#define true 1
// false is defined as 0
#define false 0

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