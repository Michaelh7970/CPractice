#include <stdio.h>

int sum(int a, int b){ // a simple function to add 2 numbers together, takes 2 integer arguments
	return a + b;
}

int main(){
	/*print a greeting*/
	printf("Hello, World!\n");

	int firstnum = 10;
	int secondnum = 20;
	printf ("%d\n", sum(firstnum, secondnum)); // run the sum function

	//Bitwise operators // & = AND // | = OR // ^ = XOR // << = left shift // >> = right shift // ~ = complement
	// typical integer is 4 bytes : 00000000 00000000 00000000 00000000 

	int x = 6;  //  00000110
	int y = 12; //  00001100
	int z = 0;  //  00000000

	// Bitwise AND & // both bits must be 1 in order to carry the bit as a 1, otherwise 0
	z = x & y; // binary of 6, binary of 12 with & operator results in z = 4
	printf("AND = %d\n", z);  //00000100

	//bitwise AND can change a single bit from a 0 to 1, using a "mask"
	// for example, in this byte: 00100100 // if you want to change just the last bit to a 1, you can bitwise AND with 01111111 (the mask)
	// all current 1's will stay 1, and all current zeros except for the one you want to change will stay 0

	//Bitwise OR | //one or both of the bits must be a 1 to carry over a 1, otherwise 0
	z = x | y;  //binary of 6, and binary of 12 with | operator results in z = 14
	printf("OR = %d\n", z); //00001110

	//Bitwise XOR ^ // either one of the bits must be 1, but not both, to carry over a 1. Otherwise 0
	z = x ^ y; // binary of 6 and binary of 12 with ^ operator results in z = 10
	printf("XOR = %d\n", z); //00001010

	//Bitwise left shift << // shifts all bits to the left by an integer
	z = x << 1; // left shifting by 1 effectively doubles the value z = 20
	printf("Left Shift = %d\n", z); //00001100

	//Bitwise right shift >> // shifts all bits to the right by an integer
	z = x >> 1; // right shifting by 1 effectively halves the value, z = 3
	printf("Right Shift = %d\n", z); //00000011

	//Bitwise complement flips all bits that are 0's to 1's and all 1's to 0's
	z = ~x ; // flipping all the bits in the number 6 results in z = 
	printf("Complement of x = 6 is: %d\n", z); //11111001

	// Practical use of bitwise operators is to store on/off values within a single int variable, and using less overall resources than making many more variables

	// basic user input with scanf
	int age; 
	printf("Enter your age: \n");
	scanf("%d", &age); //reads the next integer and stores it in variable named age
	printf("Age is: %d\n", age);
    
	char ch; // using scanf to read a single character
	printf("Enter a character: \n");
	scanf(" %c", &ch); // reads a single character from user
	printf("The character you typed is: %c\n", ch);
	
	char myString[100]; // creating an array of characters to create a string
	printf("Enter a string: \n"); 
	scanf("%s", &myString); // reads input from user until a space or newline
	printf("Your string is: %s\n", myString);
	
	return 0;
}
