#include <stdio.h>

int addition(int x, int y);

int main(void){
    int (*fn)(int, int) = &addition;
    int x = 42;
    int y = 123;
    printf("(*fn)(%i, %i) = %i\n", x, y, (*fn)(x, y)); /* output fn(42, 123) = 207 */
    printf("fn(%i, %i) = %i\n", x, y, fn(x, y)); /* Another form: you don't need to dereference explicitly */
    return 0;
}

int addition(int x, int y){
    return x + y;
}