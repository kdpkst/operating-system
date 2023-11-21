#include <stdio.h>
#include <stddef.h>

void pointer_compound_assignment();
void pointer_addition();
void pointer_subtraction();

int main() {
    pointer_compound_assignment();
    pointer_addition();
    printf("\n");
    pointer_subtraction();
    return 0;
}

void pointer_compound_assignment(){
    int x = 5;
    int *p = &x;
    // this will output the same as *p = *p + 20;
    // but the difference is += evaluates the left hand side only once 
    // *p = *p + 20 dereferences p twice (this may due to C language design)
    *p += 20;
    printf("%d\n", *p); 
} 

void pointer_addition(){
    static const size_t arr_size = 5;
    size_t k = 0;
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; /* or int *ptr = &arr[0]; */
    for (k = 0; k < arr_size; k++){
        printf("%d\t", ptr[k]);
        // or printf("%d\t", *(ptr + k)); 
        // or printf("%d\t", *ptr++); 
    }
}

void pointer_subtraction(){
    int arr[] = {1, 2, 3, 4, 5};
    int *p = &arr[2];
    int *q = &arr[3];
    // ptrdiff_t stands for pointer difference type, representing the result of subtracting two pointers
    ptrdiff_t diff = q - p;
    printf("q - p = %ti\n", diff); /* output 1 */
    printf("*(p + diff) = %d\n", *(p + diff)); /* output 4 */
}

