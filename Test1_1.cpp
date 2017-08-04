//Salleh Jahaf Test #1 Question 1

#include <stdio.h>
#define TICKET_PRICE 31.41

int main()
{
	
	int tickets;
	float totalDue;
	
	printf("Tickets for CSharp and the Coders are now on sale!");
	printf("\nYou may purchase tickets for the event here.");
	printf("\nThe price of each ticket is $31.41 plus tax");
	printf("\n\nPlease enter the amount of tickets you wish to purchase.");
	printf("\nMaximum of 4 tickets per purchase: ");
	scanf("%d", &tickets);
	
	if (tickets > 4)
	printf("Maximum number of tickets you may purchase is four, you have purchased more than what is allowed.");
	else
	{
		totalDue = tickets * TICKET_PRICE;
		totalDue = totalDue * 1.06;
		printf("\nThe total due is $%.2f", totalDue);
		printf("\nThank you for your purchase.");
}
return 0;
}


