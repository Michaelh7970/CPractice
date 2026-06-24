#include <stdio.h>


int main(){
	
	int countdown;
	printf("Enter the countdown amount (positive integer): "); //user enters countdown amount, do while loops runs that many times
	scanf("%d", &countdown);
	while(countdown >= 0){  //while loops are good for loops that you arent sure how many iterations there will be
		printf("%d\n", countdown);
		countdown -= 1; 
	}
	//for loop, good for when you know how many times you want the loop to run
	for(int i=1; i<=10; i++)
	{
		printf("The loops ran this many times: %d\n", i);
	}

	//do while loop, always runs the loop at least once, doesnt check for true condition until first iteration is complete
	countdown = 0; 
	do{
		printf("The loop ran once");
	}while(countdown > 0);

	//infinite loops, you never want a true infinite loop to happen, always have a way to get out of the loop
	//example simple infinite loop // DO NOT RUN THIS CODE
	/*
	while(1) // no escape condition, loop does not end
	{
		printf("This is an infinite loop!");
	} 
	*/
	//nested loops, when a loop is placed inside another loop, great for managing 2d and 3d information (arrays)
	for (int x=0; x<10; x++) // x goes from 0 to 10
	{
		//the nested loop will run its entire cycle every time the outer loop runs once
		for(int y=0; y<20; y++) // y goes from 0 to 20
		{
			printf("*"); // will print a * 20 times
		}
		printf("\n"); // will print a new line every time the inside loops runs 20 times
		// the output will be a rectangle of stars with rows and columns equal to the number of times each loops is run
	}

	//continue statement is used to end a loop iteration
	for (int index = 0; index < 10; index ++){
		if(index == 5){  //at index = 5, skip the iteration
			continue;  
		}
		printf("%d ", index);
	}
	printf("\n");

	// goto statement can break a loop by jumping to a label
	for(int ii = 0 ; ii < 5; ii++)
	{
		if(ii==3) // at ii = 3, run goto command to exit loop and go to skip label
		{
			goto skip;
		}
		printf("%d ", ii);
	}
	skip:
		printf("\nJumped here from the loop!");
	return 0;
}
