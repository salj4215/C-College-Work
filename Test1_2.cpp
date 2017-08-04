//Salleh Jahaf Test 1 Question 2
#include <stdio.h>
#define GROUND_FEE 3.00
#define AIR_FEE 6.50
#define GROUND_RATE 0.32
#define AIR_RATE 0.84

//prototype
void calcGround(int);
void calcAir(int);

int main()
{
	int packageWeight;
	
	printf("Thank you for choosing Geekville Postal Service");
	printf("\nYou may choose to send your package using either Ground or Air.");
	printf("\nYou can make your selection after reviewing the prices for both services.");
	printf("\n\nPlease enter, in ounces, the weight of the package you wish to send:");
	scanf("%d", &packageWeight);
	
	calcGround(packageWeight);
	calcAir(packageWeight);
	
	return 0;
}

void calcGround (int packageWeight)
{
	float gFee;
	gFee = packageWeight * GROUND_RATE + GROUND_FEE;
	printf("\nThe fee to send the package using Ground is $%.2f", gFee);
}

void calcAir (int packageWeight)
{
	float aFee;
	aFee = packageWeight * AIR_RATE + AIR_FEE;
	printf("\nThe fee to send the package using Air is $%.2f", aFee);
	
}
