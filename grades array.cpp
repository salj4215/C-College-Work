#include <stdio.h>

int main()
{
	
	int grades[20];
	int x, count = 0, aCount = 0;
	
	for (x=0; x < 20; x++)
	{
		printf("Enter a grade: ");
		scanf("%d", &grades[x]);
		if (grades[x] == -500)
			break;
		aCount++;
		}	
		
		for(x = 0; x < aCount; x++)
		{
			if(grades[x] >= 90)
			count++;
		}
		
	printf("The number of students who received A's was %d", count);	
}
