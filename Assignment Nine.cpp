//Salleh Jahaf Assignment Nine

#include <stdio.h>

void printHeader(void);
float customerSelection(float []);

int main()
{
	float service[5] = {0.00, 25.00, 22.00, 15.00, 5.00}; //define array and set values
	float tax, finalTotal, netTotal;
	printHeader(); //call function to print header
	netTotal = customerSelection(service); //call function with array loaded
	printf("\n  Your net total is \t$%.2f", netTotal); //print net total
	tax = netTotal * 0.06; //calculate tax
	printf("\n\t     Tax is \t$%.2f", tax); //print tax
	finalTotal = netTotal + tax; //calculate final total
	printf("\n                       --------");
	printf("\nYour final total is \t$%.2f", finalTotal); //print final total	
	
	return 0;
}

void printHeader(void) //code function to print a header to user
{
	printf("Thank you for choosing Cody's Car Care Shop");
	printf("\nHere are the available services we offer");
	printf("\n\n1. Oil Change\t\t$25.00");
	printf("\n2. Tire Rotation\t$22.00");
	printf("\n3. Battery Check\t$15.00");
	printf("\n4. Brake Inspection\t$5.00");
	printf("\n\nTo make a selection, enter the number corresponding with the service \nyou wish to have done.");
	printf("\nOnce your are done selecting which services you want done, \nenter 5 to see your total.");
}

float customerSelection(float service[]) //code function to ask user which services they want done
{
	int choice, x;
	float total;
	
	printf("\n\nPlease enter 1, 2, 3, or 4. If you are done making your selections, press 5 to see your total."); //print user instructions
	
	while (x != 5) //while loop to continually ask user to choose services and accumulate a total until 5 is selected
	{
	printf("\n\nPlease make a selection:");
	scanf("%d", &choice); //once user inputs selection, choice holds the selection
	
	
	switch (choice)
	{
		case 1 :
			printf("\n1. Oil Change\t\t$25.00");
			x = choice; //assign x to 1 if user selects option 1
			total = total + service[x]; //reference the array to pull charge for selection of 1 and accumulate total into variable
			break;
		case 2 :
			printf("\n2. Tire Rotation\t$22.00");
			x = choice; //assign x to 2
			total = total + service[x]; //reference the array 
			break;
		case 3 :
			printf("\n3. Battery Check\t$15.00");
			x = choice; //assign x to 3
			total = total + service[x]; //reference the array
			break;
		case 4 :
			printf("\n4. Brake Inspection\t$5.00");
			x = choice; //assign x to 4
			total = total + service[x]; //reference the array
			break;
		case 5 :
			x = choice; //assign x to 5
			break;
		default :
			printf("\nYou have entered an invalid selection."); //if user enter values other than 1 - 5, print to user
								
	}
	}
	return total; //return total to main
}

