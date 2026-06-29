#include <stdio.h>

static inline void greeting(){  // an inline function is a small function. the actual code of the function is copied completely everywhere the function is called
                        // this keeps the program execution continuing straight down instead of having to jump to where a function resides 
                        // like with non-inline functions. static ensures that the function will always be considered for inlining, without it will get compile error
    printf("Hello, user!");
}

void rec(int n) {
    
    // Base Case
    if (n == 6) return;

    printf("Recursion Level %d\n", n);
    rec(n + 1);
}


int main(){
    rec(1);
    greeting();
    return 0;
}