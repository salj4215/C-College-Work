#include <stdio.h>
//prototype
int numberFunction(int [], int *, float *);

int main()
{
	int largestNum, smallestNum, x;
	int numbers[10];
	float avg;
	
	for (x = 0;x < 10; x++)
	{
		printf("Enter a number: ");
		scanf("%d", &numbers[x]);
	}
	
	largestNum = numberFunction(numbers, &smallestNum, &avg);
	
	printf("\nThe largest number is %d", largestNum);
	printf("\nThe smallest number is %d", smallestNum);
	printf("\nThe average is %.2f", avg);
	
	return 0;
}
int numberFunction(int numbers[], int *smallestNum, float *avg)
{
	int largestNum;
	int x, total = 0;
	*smallestNum = numbers[0];
	largestNum = numbers[0];
	total = numbers[0];
	for (x = 1; x < 10; x++)
	{
		if (largestNum < numbers[x])
			largestNum = numbers[x];
		if (*smallestNum > numbers[x])
			*smallestNum = numbers[x];
		total = total + numbers[x];	
	}
	*avg = total / 10.0;
	
	return largestNum;
}
