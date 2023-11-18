#include <stdio.h>

void division_example();
void modulo_example();
void increment_decrement_example();

int main(void){
    // division_example();
    // modulo_example();
    increment_decrement_example();
    return 0;
}


void division_example(){
    int a = 19 / 2 ; /* a holds value 9 */
    int b = 255 / 2; /* c holds value 127 */
    int c = 44 / 4 ; /* d holds value 11 */
    double e = 19 / 2.0 ; /* e holds value 9.5 */
    double f = 18.0 / 2 ; /* f holds value 9.0 */
    double g = 45.0 / 4 ; /* h holds value 11.25 */
    printf("19 / 2 = %d\n", a); 
    printf("255 / 2 = %d\n", b); 
    printf("44 / 4 = %d\n", c); 
    printf("19 / 2.0 = %g\n", e);
    printf("18.0 / 2 = %g\n", f); 
    printf("45.0 / 4 = %g\n", g); 
}

// modulo operator (%) receives integer operands only
void modulo_example(){
    int a = 25 % 2; /* a holds value 1 */
    int b = 24 % 2; /* b holds value 0 */
    int c = 155 % 5; /* c holds value 0 */
    int d = 49 % 25; /* d holds value 24 */
    // escape % in printf using %%
    printf("25 %% 2 = %d\n", a); 
    printf("24 %% 2 = %d\n", b); 
    printf("155 %% 5 = %d\n", c); 
    printf("49 %% 25 = %d\n", d);    
}

void increment_decrement_example(){
    int a = 1;
    int b = 4;
    // preﬁx operations do the operation ﬁrst and then return the value 
    // postﬁx operations ﬁrst determine the value that is to be returned, and then do the operation
    if (++a > 1)  /* a is incremented by 1 before being compared in the condition */
        printf("This will print\n"); 
    else 
        printf("This will never print\n"); 
    
    if (b-- < 4)  /* b is decremented after being compared */
        printf("This will never print\n"); 
    else 
        printf("This will print\n"); 
}