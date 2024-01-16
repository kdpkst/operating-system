#include <stdio.h>
#include <string.h>

int main(void){
    // the below one is a string literal though const is not declared, which is unmodifiable
    // foo[0] = 'f' will cause undeﬁned behavior
    char *foo = "hello";
    // it is advisable to declare const to avoid engaging such undeﬁned behavior accidentally
    const char *_foo = "hello";
    // although the content of a string literal is unmodifiable, we can change what the pointer points to
    foo = "world";
    _foo = "world";
    printf("%s\n", foo);
    printf("%s\n", _foo);

    // an initialized array is not conferred the characteristics of a string literal
    // thus the following string is modifiable 
    char foo_[] = "hello";
    foo_[0] = 'f';
    printf("%s\n", foo_); 

    return 0;
}