//Salleh Jahaf Assignment 4

#include <stdio.h>
//prototype
void printHeader(void); //output header
float basicFee(void); //user input
float additionalCharges(void); //user input
void printFees(float, float); //calculate and output fees with user input

int main()
{
	float fee;
	float extraCharges;
	printHeader(); //header
	fee = basicFee(); //assign return value from basicFee function to fee
	extraCharges = additionalCharges(); //assign return value from additionalCharges function to extraCharges
	printFees(fee, extraCharges); //send values to printFees function 
	return 0;
}

//print out program header using printHeader function
void printHeader(void)
{
	printf("Welcome to Lenova Health Care");
	printf("\nWe care about you");
	printf("\nMonthly fees are:");
	printf("\n\t$59.99 for a single membership");
	printf("\n\t$69.99 for a couple membership");
	printf("\n\t$89.99 for a family membership");
	printf("\n\nWe also offer:");
	printf("\n\tTennis for $18.99 a month");
	printf("\n\tGolf for $21.99 a month");
	printf("\n\tRacquetball for $15.99 a month");
	printf("\n\nWe are running a special -- if you pay");
	printf("\nfor six months in advance, you receive 10%% off!");
	printf("\n*************************************************");
	
}

//ask user which type of membership he/she wants and determine fee, return fee to main
float basicFee(void)
{
	char choice;
	float bFee; //make returning value a float
	printf("\nWould you like a ");
	printf("\n(S) Single membership");
	printf("\n(C) Couple membership");
	printf("\n(F) Family membership\n");
	scanf("\n%c", &choice);
	
	/*if (choice == 'S')
		bFee = 59.99;
	else if (choice == 'C')
		bFee = 69.99;
	else
		bFee = 89.99;*/
	
	//assign fee according to user choice
	switch (choice)
	{
			
	case 'S' : case 's':
		bFee = 59.99;
		break;
	case 'C' : case 'c':
		bFee = 69.99;
		break;
	case 'F' : case 'f':
		bFee = 89.99;
		break;
	default:
		printf("\nInvalid Entry");
}
	//return value to main
	return bFee;			
}

//ask user if they want to add Tennis, Golf, and/or Racquetball
float additionalCharges(void) 
{
	char choiceTennis, choiceGolf, choiceRacquetball;
	float charge; //return value as a float
	printf("\nWould you like to add:");
	printf("\n\tTennis? (Y or N)");
	scanf("\n%c", &choiceTennis);
	printf("\n\tGolf? (Y or N)");
	scanf("\n%c", &choiceGolf);
	printf("\n\tRacquetball? (Y or N)");
	scanf("\n%c", &choiceRacquetball);
	
	//assign charge according to user input
	charge = 0;
	if (choiceTennis == 'Y')
		charge = charge + 18.99;
	
	if (choiceGolf == 'Y')
		charge = charge + 21.99;
	
	if (choiceRacquetball == 'Y')
		charge = charge + 15.99;
			
	//return value to main	
	return charge;	
}

//print out fees to user and ask if user wants discount
void printFees(float fee, float extraCharges)
{
	char discountChoice;
	float totalMonth, discount, totalDue; 
	printf("***************************************************************");
	printf("\nMonthly fee: \t\t$%.2f", fee);
	printf("\nAdditional fees: \t$%.2f", extraCharges);
	
	//calculate total for one month
	totalMonth = fee + extraCharges;
	printf("\n                       --------");
	printf("\nTotal for one month: \t$%.2f", totalMonth);
	//calculate discount for paying 6 months in advance
	discount = totalMonth * 6.0 / 10.0;
	printf("\n\nReceive a 10%% discount - $%.2f ", discount);
	printf("by paying for six months in advance");
	//calculate total for 6 months without discount
	totalDue = totalMonth * 6.0;
	printf("\n\nWithout discount, six months would cost $%.2f", totalDue);
	printf("\n\nWould you like to receive a discount? (Y or N)"); //ask user if they want to pay for 6 months
	scanf("\n%c", &discountChoice);
	//give user discount if they choose Y
	if (discountChoice == 'Y')
		totalDue = totalDue - discount;
		//give user total for one month as total due if they choose N
	else totalDue = totalMonth;
	
	printf("\nTotal due is $%.2f", totalDue);	
	printf("\n\nThank you for joining our club!");
	printf("\n***************************************************************");
}
