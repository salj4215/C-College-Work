//Salleh Jahaf Assignment 16

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//declare variables
	int empNo;
	char empLastName[20];
	float sales;
	
	//declare file variable
	FILE *inFile;
	char fileName[20];
	int iNotEOF;
	float highSales, lowSales, avgSales, totalSales, x = 0.00;
	
	//ask user to enter name of file
	printf("Enter filename: ");
	gets(fileName);
	
	//print header
	printf("\n\nEmp No          Name      Sales");
	printf("\n__________________________________");
	
	//open file that user entered and read only
	inFile = fopen(fileName, "r");
	
	//determine if file exists, if not, print to user that file cannot be opened and end program
	if (inFile == NULL)
	{
		printf("Error opening file");
		exit (1);
	}
	
	//set variable to value that of either end of file or not end of file
	iNotEOF = fscanf(inFile, "%d %20s %f", &empNo, &empLastName, &sales);
	
	//set value of variable holding highest sales amount and lowest
	highSales = sales;
	lowSales = sales;
	
	//keep reading file until end of file is reached
	while (iNotEOF > 0)
	{
		//print data to user
		printf("\n%d             %s\t%.2f", empNo, empLastName, sales);
	
		//accumulate total of sales
		totalSales += sales;
	
		//if highSales variable is lower than current sales variable, set highSales to Sales
		if (highSales < sales)
		highSales = sales;
	
		//if lowSales variable is higher than current sales variable, set lowSales to Sales
		if (lowSales > sales)
		lowSales = sales;
	
		//use a counter to count and divide with to find average
		x++;
	
		//update end of file variable
		iNotEOF = fscanf(inFile, "%d %20s %f", &empNo, &empLastName, &sales);
	}
	
	//print out results to user
	printf("\n\nHigh Sales:    $%.2f", highSales);
	printf("\nLow Sales:     $%.2f", lowSales);
	
	//find average
	avgSales = totalSales / x;
	
	//print average to user
	printf("\nAverage sales per person:    $%.2f", avgSales);
	
	//close file
	fclose(inFile);
	
	return 0;
}
