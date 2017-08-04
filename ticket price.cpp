//Salleh Jahaf

#include <stdio.h>

int main()
{
	int age;
	float price, total;
	char answer;
	
	do
	{
		//input the age
		printf("Enter your age: ");
		scanf("%d", &age);

		//process - calculate cost of tickets	
		if (age <= 8)
			price = 5.00;
		else if (age <= 55)	
			price = 8.00;
		else
			price = 7.50;
	
		//output the cost of the ticket
		printf("The price of your ticket is $%.2f", price);
		total = total + price;
		printf("\nDo you want to add another age (Y or N)?)");
		scanf("\n%c", &answer);
	} while (answer == 'Y');
	printf("\nThe total owed is $%.2f", total); //printing the total owed
	
	return 0;
			
}
