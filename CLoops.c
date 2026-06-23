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


	return 0;
}
