//Salleh Jahaf Assignment 13

#include <stdio.h>

//initialize and populate structure
struct Gas
{
	char gasType[10];
	int octaneRating;
	float gallonPrice;
};

typedef struct Gas GS;

//prototype
GS getData(); //gets data from user
void calcPurchase(GS); //calculates and prints out data

int main()
{
	//assign sets of data into structure
	GS gasTank1; 
	GS gasTank2;
	GS gasTank3;
	GS gasTank4;
	
	//get data from user for each tank
	gasTank1 = getData();
	gasTank2 = getData();
	gasTank3 = getData();
	gasTank4 = getData();
	
	//calculate and print out data
	calcPurchase(gasTank3);
	
	return 0;
}

GS getData(void)
{
	GS temp;
	
	//get data from user
	printf("Enter the type: ");
	fflush(stdin);
	gets(temp.gasType);
	printf("Octane: ");
	scanf("%d", &temp.octaneRating);
	printf("PPG: ");
	scanf("%f", &temp.gallonPrice);
	
	return temp;
}

void calcPurchase(GS temp)
{
	float gallonsPurchased, totalCost;
	
	//print out data
	printf("\nGas type %s", temp.gasType);
	printf("\nOctane %d", temp.octaneRating);
	printf("\nPrice per gallon $%.2f", temp.gallonPrice);
	//ask user for amount of gallons purchased
	printf("\nHow many gallons purchased of type %s: ", temp.gasType); 
	//assign to variable
	scanf("%f", &gallonsPurchased);	
	printf("\n\nGas type %s has %d octane", temp.gasType, temp.octaneRating);
	printf("\nPrice per gallon %.2f", temp.gallonPrice);
	totalCost = gallonsPurchased * temp.gallonPrice;
	printf("\nTotal cost is $%.2f", totalCost);
}
