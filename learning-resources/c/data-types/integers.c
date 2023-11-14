#include <stdio.h>
#include <stdint.h>

int main(void){
    // signed integers can represent both positive and negative values
    // unsigned integers can only represent non-negative values (>=0)
    // For all types but char, singed is set as default
    signed int si = 100;
    unsigned int usi= 655;

    int d = 42; /* decimal constant (base10) */
    int o = 052; /* octal constant (base8) */
    int x = 0xaf; /* hexadecimal constants (base16) */
    int X = 0XAf; /* letters 'a' through 'f' (case insensitive) */
    printf("%d\n", d);
    printf("%d\n", o);
    printf("%d\n", x);
    printf("%d\n", X);

    printf("size of int: %zu bytes\n", sizeof(int));
    printf("size of long int: %zu bytes\n", sizeof(long int));
    printf("size of long long int: %zu bytes\n", sizeof(long long int));

    /* 
     * fixed width integer type (C99) 
     * These types provide a way to specify integers with a guaranteed size, 
     * regardless of the underlying hardware or platform.
     */
    uint32_t u32 = 32; /* exactly 32-bits wide */
    uint8_t u8 = 255; /* exactly 8-bits wide */
    int64_t i64 = -65; /* exactly 64 bit in two's complement representation */
    return 0;
}