#include <stdio.h>

// any other non-null pointer is evaluated to be true
// a null pointer is evaluated to be false 
int main(void) {
    int *ptr = NULL;

    if (ptr) {
        printf("This won't be executed because ptr is NULL\n");
    } else {
        printf("This will be executed because ptr is NULL\n");
    }

    return 0;
}
