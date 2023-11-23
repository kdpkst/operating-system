#include <stdio.h>

typedef enum { false, true } bool;

int main(void){
    bool t = true;
    bool f = false;

    if (t){
        printf("It will print!\n");
    }

    if (!f){
        printf("It will print!\n");
    }

    return 0;
}