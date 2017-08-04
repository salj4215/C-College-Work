//Salleh Jahaf Assignment Eight

#include <stdio.h>


int main()
{
	//Declare variables and initialize
	float grossProfit = 20000.0, expenses = 35000.0, netProfitLoss;
	int x, profitYear = -1;

	//for loop to display output for initial year and future years until year 20	
	for (x = 1; x < 21; x++)
	{
		printf("Year \t%d", x); //display year
		printf("\tGross predicted profit is %.2f", grossProfit); //display projected profit
		printf("\n\t\tPredicted expenses are %.2f", expenses); //display projected expenses
		netProfitLoss = grossProfit - expenses; //calculate net profit or loss
		printf("\n\t\tNet profit is %.2f\n\n", netProfitLoss); //display profit or loss
			
			//if statement to assign first profitable year to variable profitYear
			if (netProfitLoss > 0 && profitYear < 0) 
				profitYear = x;
		
		grossProfit = grossProfit * 1.10; //calculate gross profit for next year
		expenses = expenses * 1.04; //calculate expenses for next year
	}
	printf("The year in which the business was first profitable is year %d", profitYear); //display first profitable year
	
	return 0;
}
