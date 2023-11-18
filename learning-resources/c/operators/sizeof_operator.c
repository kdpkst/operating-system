#include <stdio.h>

int main(void){
    // size_t is the type of sizeof()
    size_t int_size = sizeof(int);
    printf("%zu bytes\n", int_size);
    printf("%zu bytes\n", sizeof(int));
    
    char a = 'a';
    printf("%zu byte\n", sizeof(a));

    int arr[6] = {0, 1, 2, 3, 4, 5};
    // sizeof(arr) returns the total bytes of the entire array 
    // sizeof(arr[0]) returns size in bytes of a single element in the array.
    size_t size = sizeof(arr) / sizeof(arr[0]);
    printf("number of elements in the array: %zu\n", size);
    
    return 0;
}