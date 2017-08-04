#include <stdio.h>


int main()
{
	int n1, x, y;
	int spaces = 0;
	
	printf("Enter a number: ");
	scanf("%d", &n1);
	
	for (x = 0; x < n1; x++)
	{
		for (y = 0; y < spaces; ++y)
			printf(" ");
		printf("0\n");
		++spaces;	
	}	
	
	
	return 0;
}
