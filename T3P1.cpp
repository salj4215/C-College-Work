//Salleh Jahaf T3P1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *outFile;
	char fileName[20];
	char empName[20];
	int empNum;
	float hoursWorked, payRate, totalPaid, grandTotal=0, avgPay;
	int x;
	
	//print header
	printf("Welcome to Acme Arsenal Pay Summary.\n");
	//ask for file name
	printf("Please enter file name:");
	gets(fileName);
	
	//open file for writing
	outFile = fopen(fileName, "w");
	
	//if file could not be opened, print to user and close program
	if (outFile == NULL)
	{
		printf("The file could not be opened");
		exit(1);
	}
	//if file was found
	printf("The file was successfully opened\n");
	
	fprintf(outFile, "     Acme Aresenal Employee Pay Summary");
	fprintf(outFile, "\n-------------------------------------------------------------------");
	fprintf(outFile, "\nEmployee Name\t\tNumber\tHours\tPayRate\t\tTotal");
	
	//user enters employee info for five employees
	for(x=0;x<5;x++)
	{
		printf("Please enter employee name: ");
		fflush(stdin);
		gets(empName);
		printf("Please enter employee number: ");
		scanf("%d", &empNum);
		printf("Please enter hours worked: ");
		scanf("%f", &hoursWorked);
		printf("Please enter pay rate (per hour): ");
		scanf("%f", &payRate);
		//calculate total paid
		totalPaid = payRate * hoursWorked;
		//calculate grand total paid to all employees
		grandTotal += totalPaid;
		//print to file
		fprintf(outFile, "\n%s\t\t%d\t%.2f\t%.2f\t\t%.2f\n", empName, empNum, hoursWorked, payRate, totalPaid);
	}
	//calculate average pay
	avgPay = grandTotal / 5;
	
	//print average and grand total to file
	fprintf(outFile, "\nGrand Total pay roll is:\t$%.2f\n", grandTotal);
	fprintf(outFile, "Average pay is:\t\t\t$%.2f", avgPay);
	
	//close file
	fclose(outFile);
	
	return 0;
}
