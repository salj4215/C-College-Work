//Salleh Jahaf

#include <stdio.h>

//prototype
void printHeader(void);
void calcCost(void);
int main()
{
	printHeader(); //function call
	calcCost(); //function call
	return 0;
}

//function code
void printHeader(void)//function header
{
	printf("Welcome to Geekville We Paint It!");
	printf("\nMaking Technology paint for you!");
}
void calcCost(void)//function header
{
	//declare variables
	int squareFeet, pricePerGallon;
	int galOfPaint, hoursOfLabor, paintCost, laborCost;
	int totalCost;
	
	//input - ask the user for total square feet and cost of each gallon of paint
	printf("\n\nPlease enter the square feet of the space to be painted: ");
	scanf("%d", &squareFeet);
	printf("Please enter the price of the paint (per gallon): ");
	scanf("%d", &pricePerGallon);
	
	//process- do the calculations
	galOfPaint = squareFeet / 115;
	hoursOfLabor = galOfPaint * 8;
	paintCost = galOfPaint * pricePerGallon;
	laborCost = hoursOfLabor * 20;
	totalCost = paintCost + laborCost;
	
	//output of information
	printf("\n******************************");
	printf("\n\nGeekville We Paint It!");
	printf("\n\nNumber of gallons required: %d", galOfPaint);
	printf("\nHours of labor required:   %d", hoursOfLabor);
	printf("\n\nCost of the paint:      $%2d", paintCost);
	printf("\nCost of the Labor:     $%2d", laborCost);
	printf("\n                      ------");
	printf("\nTotal cost of the job: $%d", totalCost);
	printf("\n\n******************************");
	
}
