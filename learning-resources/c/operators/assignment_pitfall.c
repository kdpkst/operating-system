#include <stdio.h>

/* 
 * the result of an assignment such as a = i is an rvalue
 * its result is the value assigned to a, which is i
 * codes in main function will have disastrous results as a = 1 will always evaluate to 1 
 * and thus the controlling expression of the if statement will always be true
 */
int main(void){
    int a = 2;
    /* ... */
    if (a = 1)
    /* Delete all files on my hard drive */

    return 0;
}