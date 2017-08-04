/* Program to show how to 
   write a void function 
   Pool cleaning program
*/   

//Salleh Jahaf

#include <stdio.h>

//prototype
void printHeader(void);
void calcCost(void);
int main() //function header
{
	printHeader(); //function call
	calcCost(); //function call
	return 0;
	
	
}

//function code
void printHeader(void) //function header
{
	printf("Welcome to Pools 'R Us");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n\nCleaning fee is $75");
	printf("\nCost to fill the pool is $8 an hour");
	
	
}

void calcCost(void)  //function header
{
	//declare variables
	int length, width, depth;
	int volume, galOfPool, hours;
	int cleanFee = 75, fillFee, totalCost;
	
	//input - ask the user for data
	printf("\nEnter the length of the pool: ");
	scanf("%d", &length);
	printf("Enter the width of the pool: ");
	scanf("%d", &width);
	printf("Enter the depth of the pool: ");
	scanf("%d", &depth);
	
	//process - do the calculations
	volume = length * width * depth;
	galOfPool = volume * 7;
	hours = galOfPool / 50;
	fillFee = hours * 8;
	totalCost = fillFee + cleanFee;
	
	//output the information
	printf("\n\n$$$$$$$$$$$$$$$$$$$");
	printf("\n\nVolume of pool: %13d", volume);
	printf("\nTotal gallons in pool: %5d", galOfPool);
	printf("\nHours to fill pool: %9d", hours);
	printf("\nFill cost:          $%8d", fillFee);
	printf("\nTotal cost:         $%8d", totalCost);
	printf("\n\n$$$$$$$$$$$$$$$$$$$");
	
	
}
