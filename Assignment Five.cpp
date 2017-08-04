//Salleh Jahaf Assignment 5
#include <stdio.h>
#define PRODUCTS 20

int main ()
{
	//define variables
	float prices[PRODUCTS]; //define array
	int x;
	float sum;
	float average;
	
	//made a for loop to ask the user to input prices
	for (x = 0; x < PRODUCTS; x++)
	{
		printf("Enter price: ");
		scanf("%f", &prices[x]);
	}
	//calculate the sum of all prices entered using a for loop and accumulator
	sum = prices[0];
	for (x = 1; x < PRODUCTS; x++)
	{
		sum = sum + prices[x];
		
	}
	//output the sum to user
	printf("\nThe sum of the prices is $%.2f", sum);
	//calculate the average
	average = sum / PRODUCTS;
	//output the average to the user
	printf("\nThe average of the prices is $%.2f", average);
	//output the prices under $5 to the user
	printf("\nPrices under $5.00");
	//use a for loop and if statement to determine the prices under $5
	for (x = 0; x < PRODUCTS; x++)
	{
		if (prices[x] < 5.00)
		printf("\n\t$%.2f", prices[x]);
		
	}
	//output the prices over the average to the user
	printf("\nPrices over the average");
	//use a for loop and if statement to determine the prices over the average
	for (x = 0; x < PRODUCTS; x++)
	{
		if (prices[x] > average)
		printf("\n\t$%.2f", prices[x]);
	}
	
	
	return 0;
}
