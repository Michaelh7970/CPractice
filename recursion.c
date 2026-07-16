#include <stdio.h>

static inline void greeting(){  // an inline function is a small function. the actual code of the function is copied completely everywhere the function is called
                        // this keeps the program execution continuing straight down instead of having to jump to where a function resides 
                        // like with non-inline functions. static ensures that the function will always be considered for inlining, without it will get compile error
    printf("Hello, user!\n");
}

void rec(int n) {  // recursive functions call themselves within the function. They must be very specific to not cause errors or infinite loops
    
    // Base Case
    if (n == 0) return;

    printf("Recursion Level %d\n", n);  
    rec(n - 1);    // function calls itself with altered parameters
}

int main(){
    rec(8);
    greeting();

    //nested functions: a function within another function is normally not possible in C. GCC allows nested functions as an extension
    void inner_function(){
        printf("Inner Function\n");
    }
    inner_function();
    return 0;
}