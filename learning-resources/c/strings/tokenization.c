#include <stdio.h>
#include <string.h>

void strtok_example();
void not_reentrant();

int main(void) {
    // Warning: strtok is neither thread safe nor re-entrant because it uses a static buﬀer while parsing
    // The standard C libraries do not contain a thread-safe or re-entrant version but some others do: strtok_r or strtok_s
    strtok_example();
    not_reentrant();
    return 0;
}

void strtok_example(){
    int toknum = 0;                            
    char src[] = "Hello,, world!";      
    // delimiters is a string containing the delimiter characters (comman, space, exclamation mark)   
    // multiple consecutive delimiters in the source string are treated as one
    // for src string the second comma will be ignored    
    const char delimiters[] = ", !";     
    // call strtok to extract the first token from src string  
    // strtok returns a pointer to the first token in src
    // strtok modifies the input string by replacing the delimiter characters with null terminators
    // thus the first param of strtok cannot be const or a string literal !!!  
    char *token = strtok(src, delimiters);  

    while (token != NULL) {
        printf("%d: [%s]\n", ++toknum, token); 
        /*
         * calls to strtok to continue tokenizing the same source string should not 
         * pass the source string again, but instead pass NULL as the ﬁrst argument
         */
        token = strtok(NULL, delimiters);      
    }
}

void not_reentrant(){
    char src[] = "1.2,3.5,4.2";
    char *first = strtok(src, ",");
    // the expected output is [1.2]  [1]  [2]  [3.5]  [3]  [5]  [4.2]  [4]  [2]
    do{
        printf("[%s]  ", first);
        char *part = strtok(first, ".");
        while (part != NULL){
            printf("[%s]  ", part);
            part = strtok(NULL, ".");
        }
    // strtok in the outer loop is at the end of the string used by the inner loop and returns NULL immediately
    // the second and third substrings of the src array are not analyzed at all
    // thus it will only output [1.2]  [1]  [2] 
    } while ((first = strtok(NULL, ",")) != NULL);
}


