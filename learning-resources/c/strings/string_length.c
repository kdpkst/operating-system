#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void simple_strlen_usage();
void strlen_not_work();

int main(void){
    simple_strlen_usage();
    strlen_not_work();
    return 0;
}

void simple_strlen_usage(){
    char s[] = "hello, world!";
    size_t s_len = strlen(s);
    /*
     * strlen counts all the bytes from the beginning of the string 
     * up to but not including, the terminating NULL character ('\\0')
     * thus it outputs 13 rather than 14
     */ 
    printf("%zu\n", s_len);
}

void strlen_not_work(){
    // if the string contains any Unicode characters
    // strlen cannot tell how many characters are in the string 
    // because some characters may be multiple bytes long
    // you may calculate the length of string by yourself
    char asciiString[50] = "Hello world!";
    char utf8String[50] = "Γειά σου Κόσμε!"; /* "Hello World!" in Greek */
    printf("asciiString has %zu bytes in the array\n", sizeof(asciiString));
    printf("utf8String has %zu bytes in the array\n", sizeof(utf8String));
    printf("\"%s\" is %zu bytes\n", asciiString, strlen(asciiString));
    printf("\"%s\" is %zu bytes\n", utf8String, strlen(utf8String));
}

