//Salleh Jahaf Assignment 6

#include <stdio.h>

//prototype
int read_temps(int []); //create function to input temps into array
int hot_days(int, int[]);//function to count # of hot days
void print_temps(int, int, int[]);//function to print table and results of calculations

int main()
{
	int x;//define variable for array input and for loop
	int temps[31];//define array with 31 inputs
	int numOfTemps;
	int numOfHotDays;
	
	numOfTemps = read_temps(temps); //assign return value of read_temps function to variable after running read_temps
	numOfHotDays = hot_days(numOfTemps,temps);//assign return value of hot_days to variable after running hot_days
	print_temps(numOfHotDays, numOfTemps, temps);//send in variables and array to print_temps and run function 
	return 0;
	
}

int read_temps(int temps[])//function to count number of temperatures and input temps into array
{
	int x, aCount = 0;//set counter to 0
	
	//count number of temperatures using for loop and counter
	for (x = 0; x < 31; x++)
	{
	printf("Enter a temperature or -500 to end: ");//-500 is sentinel value
		scanf("%d", &temps[x]);//inputs user data into array
		if (temps[x] == -500)//break out of for loop if -500 is entered
			break;
		aCount++;//increase value by 1 for each loop
	}
	return aCount;//send value to main
}

int hot_days(int numOfTemps, int temps[])//function to count # of days over 32 degrees
{
	int x, hCount = 0;//set counter to 0
	
	//count # of hot days using for loop and counter
	for (x = 0; x <= numOfTemps; x++)
	{
		if (temps[x] > 32)//if value of x is over 32, increase counter by 1	
		hCount++;		
	}
	return hCount;//send value to main
}

void print_temps(int numOfHotDays, int numOfTemps, int temps[])//print table and results of calculations
{
	int x, totalTemps, average, columns;
	
	printf("\n");
	printf("\tTable of temperatures recorded for this month.\n");
	
	//use for loop to print out temps in a table
	for (x = 0; x <= numOfTemps; x++)
	{
		if (temps[x] == -500)
			break;
		printf("\t%d", temps[x]);
		totalTemps = totalTemps + temps[x];//accumulator to add temps together during every loop
		columns++;//counter to count each temp being printed
		if (columns > 6)//once counter hits 7, creates a new line to print temps, forming a table
		{
		printf("\n");
		columns = 0;//resets counter to 0
		}
	}
	//calculate average and print to screen
	average = totalTemps / numOfTemps;
	printf("\n\nThe average of temperatures for this month is %d", average);
	//print # of hot days to screen
	printf("\n\nThere are a total of %d hot days this month.", numOfHotDays);
	
}
