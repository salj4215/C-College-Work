//pointer arrays

#include <stdio.h>

int main()
{
	int nums[5];
	int x;
	int *nPtr = &nums[0];
	
	for (x=0;x<5;++x)
	{
		printf("Enter a number: ");
		scanf("%d", &*(nums+ x)); //same as nums[x]
	}
	for (x=0;x<5;++x)
	{
		printf("\n%d", *nPtr++);
	}
	
	return 0;
}
