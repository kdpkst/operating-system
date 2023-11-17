#include <stdio.h>

int main(void)
{
    // a = b ? c : d
    // (condition) ? (value_if_true) : (value_if_false)
    int x = 20;
    int y = 10;
    int z = 30;
    printf("%d\n", 1 ? x : y);
    printf("%d\n", 0 ? x : y);

    // the biggest among x, y, z
    int biggest = x > y ? (x > z ? x : z) : (y > z ? y : z);
    printf("%d\n", biggest); 

    // The conditional operator associates from right to left. 
    // Thus, the following two expressions are equivalent
    // exp1 ? exp2 : exp3 ? exp4 : exp5
    // exp1 ? exp2 : ( exp3 ? exp4 : exp5 )
    
    return 0;
}
