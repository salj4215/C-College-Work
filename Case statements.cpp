//Salleh Jahaf
#include <stdio.h>

int main()
{
	int answer;
	int num1, num2;
	char choice;
	printf("Enter a number");
	scanf("%d", &num1);
	printf("Enter another number");
	scanf("%d", &num2);
	printf("\nChoose: ");
	printf("\nA - add");
	printf("\nS - subtract");
	printf("\nM - multiply");
	printf("\n\nChoice is ");
	scanf("\n%c", &choice);
	
	/*if(choice == 'A')
	{
		answer = num1 + num2;
		printf("\nAdding - answer is %d", answer)
	}
	else if (choice == 'S')
	{
		answer = num1 - num2;
		printf("\nSubtracting - answer is %d", answer);
	}
	else if (choice == 'M')
	{
		answer = num1 * num2;
		printf("\nMultiplying - answer is %d", answer);
	}
	else
		printf("\nInvalid entry");
	*/
	
	switch(choice)
	{
		
		case 'A': case 'a':
			answer = num1 + num2;
			printf("\nAdding - answer is %d", answer);
			break;
		case 'S': case 's':
			answer = num1 - num2;
			printf("\nSubtracting - answer is %d", answer);
			break;
		case 'M': case 'm':
			answer = num1 * num2;
			printf("\nMultiplying - answer is %d", answer);
			break;		
		default:
			printf("\nInvalid Entry!");
		}	
}
