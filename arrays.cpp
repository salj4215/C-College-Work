//Salleh Jahaf
#include <stdio.h>
#define STUDENTS 5

int main ()
{
	int ages[STUDENTS];
	int x;
	int youngest;
	int oldest;
	int yIndex;
	int oIndex;
	
	for (x = 0; x < STUDENTS; x++)
	{
		printf("Enter age: ");
		scanf("%d", &ages[x]);
	}
	youngest = ages[0];
	oldest = ages[0];
	for (x = 1; x < STUDENTS; x++)
	{
		if (youngest > ages[x])
		{
			youngest = ages[x];
		
		}	yIndex = x;
		if (oldest < ages[x])
		{
			oldest = ages[x];
			oIndex = x;	
		}
	}
	
	
	printf("Youngest age is %d and is in position %d", youngest, yIndex);
	
	printf("\nOldest age is %d and is in position %d", oldest, oIndex);
	
	
	
	return 0;
}

