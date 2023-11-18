#include <stdio.h>
#include <limits.h>

void bit_pattern(int u);

int main(void)
{
    // Warning: Bitwise operations with signed types should be avoided (sign bit has a particular meaning)

    unsigned int a = 29; /* 29 = 0001 1101 */ 
    unsigned int b = 48; /* 48 = 0011 0000 */
    int c = 0; 
    
    c = a & b; /* 32 = 0001 0000, & bitwise AND */
    printf("%d & %d = %d\n", a, b, c );
    
    c = a | b; /* 61 = 0011 1101, | bitwise OR */
    printf("%d | %d = %d\n", a, b, c );
 
    c = a ^ b; /* 45 = 0010 1101, ^ bitwise XOR */
    printf("%d ^ %d = %d\n", a, b, c );
     
    /*
     * In the context of a 32-bit signed integer represented in two's complement form
     * The leftmost bit (most significant bit) is the sign bit. The number is negative when sign bit = 1
     * two's complement: inverting the bits and adding 1
     */ 
    c = ~a; /* -30 = 1111 ... 1110 0010, ~ bitwise not */
    printf("~%d = %d\n", a, c ); /* the result is interpreted as a signed integer when using %d */
    
    c = a << 2; /* 116 = 0111 0100, << logical left shift*/
    printf("%d << 2 = %d\n", a, c );
    
    c = a >> 2; /* 7 = 0000 0111, >> logical right shift*/
    printf("%d >> 2 = %d\n", a, c );

    bit_pattern(a);
 
    return 0;
}


// the function prints the bit pattern of the input integer
void bit_pattern(int u)
{
    int i, x, word;
    unsigned mask = 1;
    // CHAR_BIT: the number of bits in char (1 byte)
    // most architectures use 8 bits per byte
    // thus, word represents the number of bits in an integer
    word = CHAR_BIT * sizeof(int); 
    mask = mask << (word - 1); /* shift 1 to the leftmost position */
    for(i = 1; i <= word; i++)
    {
        x = (u & mask) ? 1 : 0; /* identify the bit */
        printf("%d", x); 
        mask >>= 1; /* mask = mask >> 1, shift mask to the right by 1 bit */
    }
}
