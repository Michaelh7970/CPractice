#include <stdio.h>
//functions can be void - have no return type - or start with a variable declaration (int, char, etc) and return a variable of that type
//functions can be declared outside of main, to be used anywhere throughout the program
int get_sum(int a, int b){ //functions can take parameters, which are used within the function
    int sum = a + b;  //add together the two parameter variables
    return sum;  // return the value of the two parameter integers 
}
void printgreeting(){ // you can have a void function which does not have a return value // also can have functions that dont use any arguments
    printf("Hello everyone, this is a greeting.\n");
}
//functions are very useful for some type of calculation that needs to be run multiple times thru your program
// rather than repeating the same lines of code every time, you simply call the function every time

void func1(int val){  //takes a parameter by value
    val = 100;  //changes the value
}
void func2(int *val){  //takes parameter by pointer to variable rather than value
    *val = 100;
}
int main(int argc, char* argv[]){
    int result = get_sum(5, 12); //calling the function must use the exact amount and type of variables in the function declaration
    printf("The sum of the numbers is: %d\n", result);
    printgreeting(); //call the printgreeting function
    
    int x = 10; 
    func1(x);  //passing x by value to func1
    printf("%d", x);  // the value of x is not changed because x's value is passed to the function, not the actual variable 
    
    printf("\n");

    func2(&x); // passing x by pointer as parameter in func2
    printf("%d", x); //the value is changed because the pointer points to the variable itself

    return 0;
}