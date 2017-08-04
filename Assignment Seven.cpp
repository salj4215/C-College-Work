//Salleh Jahaf Assignment 7

#include <stdio.h>

int main()
{
	int pamCar, leoCar, kimCar, bobCar;
	int x = 0;
	
	printf("Enter cars sold by Pam >> ");
		scanf("%d", &pamCar);
	printf("Enter cars sold by Leo >> ");
		scanf("%d", &leoCar);
	printf("Enter cars sold by Kim >> ");		
		scanf("%d", &kimCar);
	printf("Enter cars sold by Bob >> ");
		scanf("%d", &bobCar);
	
	printf("\n\nCar Sales for Month");
	printf("\n\nPam\t");
		
	while(x < pamCar)
	{
		printf("X");
		x++;
	 } 
	x = 0;
	printf("\nLeo\t");
	
	while(x < leoCar)
	{
		printf("X");
		x++;
	}
	x = 0;
	printf("\nKim\t");
	
	while(x < kimCar)
	{
		printf("X");
		x++;
	}
	x=0;
	printf("\nBob\t");
	
	while(x < bobCar)
	{
		printf("X");
		x++;
	}
	return 0;
}
