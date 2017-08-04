//Salleh Jahaf Assignment 15

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//define variables
	FILE *outFile;
	char fileName[15];
	int carNO, miles, gallonsUsed;
	int totalMiles=0, totalGallons=0;
	float averageMPG;
	char choice;
	
	//prompt the user to enter filename
	printf("Enter the file name: ");
	gets(fileName);
	
	//open a file with user filename and write over existing file if it exists
	outFile = fopen(fileName, "w");
	
	//show user if file open was successful
	if (outFile == NULL)
	{
		printf("\nThe file could not be opened");
		exit(1);
	}
	printf("The file has successfully opened\n");
	
	choice = 'Y';
	
	//write header to file
	fprintf(outFile, "Car No.       Miles Driven       Gallons Used\n\n");
	
	//as long as choice = y
	while (choice == 'Y')   
	{
		//user will enter info
		printf("Enter the Car Number: ");
		scanf("%d", &carNO);
		printf("Enter miles driven: ");
		scanf("%d", &miles);
		printf("Enter gallons used: ");
		scanf("%d", &gallonsUsed);
		//accumulate total miles and gallons used
		totalMiles += miles;
		totalGallons += gallonsUsed;
		//write to file
		fprintf(outFile, "%d %20d %20d\n", carNO, miles, gallonsUsed);
		//prompt user if they want to enter info for another car
		printf("Do you want to enter another car?(Y or N)");
		scanf("\n%c", &choice);
	}
	
	//calculate average miles per gallon
	averageMPG = (float) totalMiles / (float) totalGallons;
	
	//print to file summary information		
	fprintf(outFile, "\nTotal miles driven: %d\n", totalMiles);
	fprintf(outFile, "Total Gallons of gas: %d\n", totalGallons);
	fprintf(outFile, "Average MPG: %.2f", averageMPG);	
	
	fclose(outFile);

return 0;	
}
