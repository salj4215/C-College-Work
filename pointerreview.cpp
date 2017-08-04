#include <stdio.h>

float calcTotal (float, float, float, float *, float *);
//return 1 value directly and the other two with pointers
int main()
{
	float price1, price2, salesTax;
	float netTotal, salesTaxAmt, grandTotal;
	//input -ask user for prices and sales tax
	printf("Enter price 1: ");
	scanf("%f", &price1);
	printf("Enter price 2: ");
	scanf("%f", &price2);
	printf("Enter amount of sales tax (0.06): ");
	scanf("%f", &salesTax);
	//call the function
	netTotal = calcTotal(price1, price2, salesTax, &salesTaxAmt, &grandTotal);
	//output all my information
	printf("Price 1: %.2f", price1);
	printf("\nPrice 2: %.2f", price2);
	printf("\nSales tax Percent: %.2f", salesTax);
	printf("\nNet total: %.2f", netTotal);
	printf("\nSales Tax Total: %.2f", salesTaxAmt);
	printf("\nGrand Total: %.2f", grandTotal);
	
	return 0;
}

float calcTotal(float price1, float price2, float salesTax, float *salesTaxAmt, float *grandTotal)
{
	float netT;
	
	netT = price1 + price2;
	*salesTaxAmt = netT * salesTax;
	*grandTotal = netT + *salesTaxAmt;
	return netT;
}

