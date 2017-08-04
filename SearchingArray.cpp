#include <stdio.h>

int main()
{
	int nums[10];
	int x, y;
	int search;
	int found = 0;
	int temp;
	
	for(x=0; x < 10; ++x)
	{
		printf("Enter a number:");
		scanf("%d", &nums[x]);
	}
	printf("Enter a value to search for: ");
	scanf("%d", &search);
	
	for (x = 0; x < 10; ++x)
	{
		if(search == nums[x])
			{
			printf("\nNumber %d is found in position %d", search, x + 1);
			found = 1;
		}
	}
	if (found != 1)
	{
		printf("\nNumber not found");
	}
	//sorting our array
	for (y = 0; y < 10; ++y)
	{
		for (x = 0; x < 10; ++x)
		{
			if (nums[x] > nums[x + 1])
			{
				temp = nums[x];
				nums[x] = nums[x+1];
				nums[x+1] = temp;
			}
		}
	}
	printf("\nIn sorted order");
	for(x = 0; x < 10; ++x)
		printf("   %d", nums[x]);
	
	return 0;
}
