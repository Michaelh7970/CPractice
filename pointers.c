#include <stdio.h>
#include <stdlib.h>

int main(){

    //normal variable:
    int x = 100;

    //pointer variable that stores address of x // & is the address operator
    int *ptr = &x;

    //directly accessing ptr will give an address in memory // %p is type specifier for pointer
    printf("%p", ptr);
    printf("\n");

    // dereference the pointer to access the value with the * operator
    printf("%d", *ptr);
    printf("\n");

    // size of pointers depends on architecture of the machine, 32 bit is typically 4 bytes, 64 bit is typically 8 bytes
    int *ptr1; 
    char *ptr2;
    

    printf("%zu\n", sizeof(ptr1));
    printf("%zu\n", sizeof(ptr2));

    // NULL pointer is a pointer that doesn't point to a valid memory location, just assign NULL to the value of the pointer
    //checking if a pointer is NULL prevents attempting to access invalid memory locations
    int *ptr3 = NULL;

    //void pointer does not have a data type. also known as generic pointer bc it can store the address of any variable type
    void *ptr4; //must be typecast before dereferencing

    // wild pointer has been declared but not initialized, using a wild pointer will result in undefined behavior
    int *ptr5; // no initialization

    //dangling pointer is a pointer that points to a memory location that has already been freed (deallocated). Accessing it leads to undefined behavior
    int* ptr6 = (int*)malloc(sizeof(int));
    free(ptr6); // clears the pointer
    printf("Memory freed\n");
    ptr6 = NULL ; //remove the dangling pointer

    return 0;
}