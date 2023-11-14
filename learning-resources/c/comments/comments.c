/* 
 * contens between #if 0 and #endif are comments
 * useful when commenting the code snippet that contains multi-line comments
 */ 
#if 0 
/* A large amount of code with multi-line comments */ 
int main(void)
{
 puts("hello")
 return 0;
}
#endif 

/* this is a comment */

/*
 * this is a
 * multi-line
 * comment
 */

// double forward slashes style introduced by C99


// pitfall due to trigraphs (consider following program):
int main(void){
    int foo = 20; // Start at 20 ??/
    int bar = 0;
    // The ??/ trigraph is actually a longhand notation for \, which is the line continuation symbol
    // The following will cause a compilation error (undeclared variable 'bar')
    // because 'int bar = 0;' is part of the comment on the preceding line
    bar += foo;
    return 0;
}













