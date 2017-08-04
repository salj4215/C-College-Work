#include <stdio.h>

int main()
{
	
	int x, grades, sum;
	float avg;
	
	for (x = 0; x < 10; x++)
	{
		printf("Enter a grade:");
		scanf("%d", &grades);
		sum+=grades;
	}
	avg = (float)sum / 10;
	printf("\nThe average is %.2f", avg);
}
