#include <stdio.h>
#include <stdbool.h>

// header ﬁle stdbool.h allows to use bool as a Boolean data type (version >= C99)
int main(void){
    // bool is the nice spelling for _Bool type
    bool t = true;
    bool f = false;
    _Bool tr = true;
    _Bool fa = false;

    if (t){
        printf("It will print!\n");
    }

    if (!f){
        printf("It will print!\n");
    }

    return 0;
}