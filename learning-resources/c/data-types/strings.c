#include <stdio.h>

int main(void){
    // a string literal in C is a sequence of chars, terminated by a literal zero
    char* str = "abc"; /* a pointer to a string literal. Variable str points to the first character */
    char a1[] = "abc"; /* {'a','b','c','\0'}, null terminator is automatically added and used to signify the end of a string */
    char a2[4] = "abc"; /* same as a1 */
    char a3[3] = "abc"; /* {'a','b','c'}, missing '\0' (may have sth wrong) */
    printf("str: %s\n", str);
    printf("str1: %s\n", a1);
    printf("str2: %s\n", a2);
    printf("str3: %s\n", a3);

    // string literals are not modiﬁable
    // attempt to alter their values results in undeﬁned behaviour
    // char* s = "foobar";
    // s[0] = 'F'; undefined behaviour
    
    // string concatenation since c99
    char* s = "hello" ", " "world" "!";
    printf("%s\n", s);

    return 0;
}