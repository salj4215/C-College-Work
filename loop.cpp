#include <stdio.h>




int main()
{
	int num1, num2;
	
	printf("Please enter a number:");
		scanf("%d", &num1);
		
	printf("Please enter another number:");
		scanf("%d", &num2);
		
	if (num1 == num2)
		printf("No numbers in between");
	else if (num1 > num2)	
	{
		while (num1 >= num2)
		{
			printf("\n%d", num1);
			--num1;
		}
	}
	else
	{
		while(num1 <= num2)
		{
			printf("\n%d", num1);
			++num1;
		}
	}
	return 0;		
}


