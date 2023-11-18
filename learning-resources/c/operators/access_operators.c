#include <stdio.h>

void address_of();
void dereference();
void interchangeability_of_indexing();

int main(void){
    address_of();
    dereference();
    interchangeability_of_indexing();
    return 0;
}

void address_of(){
    int x = 4;
    // return the memory address of a variable
    int *p = &x;
    // cast the operand to a pointer to void
    printf("%p = %p\n", (void *)&x, (void *)p);
}

void dereference(){
    int x = 20;
    int *p = &x;
    printf("x = %d, *p = %d\n", x, *p);
    // * operator dereferences a pointer
    // dereference is the act of accessing the value that is stored at a specific memory address
    // *p = 150 means assign the value 150 to the memory location pointed to by p
    *p = 150;
    printf("x = %d, *p = %d\n", x, *p);
}

void interchangeability_of_indexing(){
    int arr[] = {1, 2, 3, 4, 5};
    // indexing is syntactic sugar for pointer addition
    // a[i] is equivalent to *(a + i)
    printf("syntactic sugar: %d = %d\n", arr[2], *(arr + 2));
    // arr[i] and i[arr] are equivalent
    // obviously *(arr + i) equals to *(i + arr)
    // usage of i[arr] is generally not recommended as it aﬀects code readability
    printf("indexing interchangeability: %d = %d\n", arr[1], 1[arr]);
}
