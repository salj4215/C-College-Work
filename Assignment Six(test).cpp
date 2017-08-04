//Salleh Jahaf Assignment 6

#include <stdio.h>

//prototype
int read_temps(int []); //create function to 
int hot_days(int, int[]);
void print_temps(int, int, int[]);

int main()
{
	int x;//define variable for array input and for loop
	int temps[31];//define array with 31 inputs
	int numOfTemps;
	int numOfHotDays;
	
	numOfTemps = read_temps(temps); //assign return value of read_temps function to variable
	numOfHotDays = hot_days(numOfTemps,temps);
	print_temps(numOfHotDays, numOfTemps, temps);
	return 0;
	
}

int read_temps(int temps[])//have to have[] here
{
	int x, aCount = 0;
	
	for (x = 0; x < 31; x++)
	{
	printf("Enter a temperature or -500 to end: ");
		scanf("%d", &temps[x]);//inputs user data into array
		if (temps[x] == -500)
			break;
		aCount++;	
	}
	return aCount;
}

int hot_days(int numOfTemps, int temps[])
{
	int x, hCount = 0;
	
	for (x = 0; x < 31; x++)
	{
		if (temps[x] > 32)	
		hCount++;
		if (temps[x] == -500)
			break;		
	}
	return hCount;
}

void print_temps(int numOfHotDays, int numOfTemps, int temps[])
{
	int x, totalTemps, average, columns;
	
	printf("\n");
	printf("\tTable of temperatures recorded for this month.\n");
	for (x = 0; x < 31; x++)
	{
		if (temps[x] == -500)
		break;
		printf("\t%d", temps[x]);
		totalTemps = totalTemps + temps[x];
		columns++;
		if (columns > 6)
		{
		printf("\n");
		columns = 0;
		}
	}
	average = totalTemps / numOfTemps;
	printf("\n\nThe average of temperatures for this month is %d", average);
	printf("\n\nThere are a total of %d hot days this month.", numOfHotDays);
	
}
