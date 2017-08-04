#include <stdio.h>

int main()
{
	float assignments;
	float tests;
	float aPercent, tPercent;
	float aPoints, tPoints, total;
	
	printf("Enter the total assignment points: ");
	scanf("%f", &assignments);
	printf("Enter the total test points: ");
	scanf("%f", &tests);
	
	aPercent = assignments/170.00;
	tPercent = tests/225.00;
	
	aPoints = aPercent * 40;
	tPoints = tPercent * 60;
	total = aPoints + tPoints;
	
	printf("You are currently getting %.2f %%", total);
	
	return 0;
}
