//Salleh Jahaf T3P2

#include <stdio.h>
#include <stdlib.h>
#define TAX 0.06 //define constant for tax

//define structure
struct party
{
	int eventNum;
	int numGuests;
	float pricePerGuest;
	float extraCharges;
};

//structure typedef
typedef struct party PARTY;
//prototype for display function
void display(PARTY []);

int main()
{
	//declare structure array
	PARTY pArray[5];
	int x;
	
	//for loop for user to enter info and load into array
	for(x=0;x<5;x++)
	{
		printf("Please enter event number: ");
		scanf("%d", &pArray[x].eventNum);
		printf("Please enter number of guests: ");
		scanf("%d", &pArray[x].numGuests);
		if (pArray[x].numGuests > 50)
			pArray[x].pricePerGuest = 55;
		else pArray[x].pricePerGuest = 65;
		printf("Enter any extra charges: ");
		scanf("%f", &pArray[x].extraCharges);
	}
	//call display function
	display(pArray);
	
	return 0;
}

void display(PARTY temp[])
{
	int x;
	float netCost=0, tax, totalCostperEvent=0, grandTotal=0;
	
	//print header
	printf("\n\nEvent Guests  Extra Charges     Net Cost  Tax  Total Cost\n");
	
	//display info to user
	for (x=0; x<5; x++)
	{
		//calculate net cost
		netCost = temp[x].numGuests * temp[x].pricePerGuest + temp[x].extraCharges;
		//calculate tax
		tax = netCost * TAX;
		//calculate total cost per event
		totalCostperEvent = netCost + tax;
		printf("\n%d\t%d\t%.2f\t\t%.2f\t%.2f\t%.2f", temp[x].eventNum, temp[x].numGuests, temp[x].extraCharges, netCost, tax, totalCostperEvent);
		//calculate grand total
		grandTotal += totalCostperEvent;
	}
	//print grand total to user
	printf("\n\nThe grand total is : $%.2f", grandTotal);
}
