//Salleh Jahaf Data Validation

#include <stdio.h>

int main()
{
	int num;
	
	printf("Enter a number between 1 and 10: ");
	scanf("%d", &num); //priming read
	while(num < 1 || num > 10)
	{
		printf("INVALID! Enter a number between 1 and 10: ");
		scanf("%d", &num);
	} //indefinite loop -- will loop as many times as needed
	printf("Your number is %d", num);
	
	return 0;
}
