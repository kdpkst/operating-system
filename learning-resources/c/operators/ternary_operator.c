#include <stdio.h>

int main(void)
{
    // a = b ? c : d
    // (condition) ? (value_if_true) : (value_if_false)
    int x = 20;
    int y = 10;
    printf("%d, %d\n", 1 ? x : y, 0 ? x : y);
    
    return 0;
}
