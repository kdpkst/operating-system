// string is not an intrinsic type in C
// it is a one-dimensional array of characters terminated by a null-character ('\0')

int main(void){
    // the below two lines are equivalent to each other
    char modifiable_s1[] = "test";
    char modifiable_s2[] = {'t', 'e', 's', 't', '\0'};
    printf("modifiable string one: %s\n", modifiable_s1);
    printf("modifiable string two: %s\n", modifiable_s2);

    modifiable_s1[0] = 'f';
    modifiable_s2[0] = 'k';
    printf("string one after modification: %s\n", modifiable_s1);
    printf("string two after modification: %s\n", modifiable_s2);

    return 0;
}