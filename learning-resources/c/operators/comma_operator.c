#include <stdio.h>

int main(void){
    int x = 42, y = 42;
    // left operand will be evaluated but its resulting value is discarded
    // return value of the rightmost operand for the entire expression
    printf("%i\n", (x *= 2, y)); /* output 42*/
    printf("%i\n", x); /* output 84 */

    //output the odd numbers below 9
    for(int k = 1; k < 10; printf("%d\n", k), k += 2); 
   
    // output sum to first 9 natural numbers
    for(int sumk = 1, k = 1; k < 10; k++, sumk += k)
        printf("%d%5d\n", k, sumk);

    return 0;
}