//Salleh Jahaf and Salman Saleh

#include <stdio.h>

//prototype
void showHeader(void);
void calcPrice(void);
int main()
{
	showHeader();
	
	calcPrice();
	return 0;
	
}

//function code
void showHeader(void)
{
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
	printf("\nWelcome to IBM's Department Store");
	printf("\n$$$$$$$      BoGoHo        $$$$$$$");
	printf("\n    Buy One item at full price");
	printf("\n     Get One item at Half Off");
	printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
}
void calcPrice(void)
{
	//declare variables
	float firstPrice, secondPrice, totalCost, discountedPrice, salesTax, totalDue;
	
	//input
	printf("\nEnter the price of the first item:\n");
	scanf("%f", &firstPrice);
	printf("Enter the price of the second item:\n");
	scanf("%f", &secondPrice);
	
	//process
	if (firstPrice > secondPrice)
		{
		discountedPrice = secondPrice * 0.5;
		totalCost = firstPrice + discountedPrice;
	}
	else
		{
		discountedPrice = firstPrice * 0.5;
		totalCost = secondPrice + discountedPrice;
	}
	salesTax = totalCost * 0.06;
	totalDue = totalCost + salesTax;
	 
	 //output
	 printf("\n\nPrice of first item: $%.2f", firstPrice);
	 printf("\nPrice of second item: $%.2f", secondPrice);
	 printf("\nDiscount: $%.2f", discountedPrice);
	 printf("\nTotal cost for items: $%.2f", totalCost);
	 printf("\nTotal tax due: $%.2f", salesTax);
	 printf("\nTotal price: $%.2f", totalDue);
	 	
}
