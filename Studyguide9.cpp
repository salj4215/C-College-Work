#include <stdio.h>
#define NUM 5

//prototype
void displayGrade(int[]);
int calcGrade(int[], int *, float *);

int main()
{
	int grades[NUM];
	int x, high, low;
	float avg;
	
	for(x = 0; x < NUM; x++)
	{
		printf("Enter a grade: ");
		scanf("%d", &grades[x]);
		
	}
	displayGrade(grades);
	
	high = calcGrade(grades, &low, &avg);
	printf("\nHighest is %d", high);
	printf("\nLowest is %d", low);
	printf("\nAverage is %.2f", avg);
	
	return 0;
}

void displayGrade(int grades[])
{
	int x;
	for (x = 0; x < NUM; x++)
	{
		printf("\n%d --", grades[x]);
		if (grades[x] >= 90)
			printf("A");
		else if (grades[x] >= 80)
			printf("B");
		else if (grades[x] >= 70)
			printf("C");
		else if (grades[x] >= 60)
			printf("D");
		else printf("E");				
	}
}

int calcGrade(int grades[], int *low, float *average)
{
	int high;
	int x, sum;
	high = grades[0];
	*low = grades[0];
	
	for (x = 1; x < NUM; x++)
	{
		if (high < grades[x])
			high = grades[x];
		if (*low > grades[x])
			*low = grades[x];
		sum += grades[x];		
	}
	
	*average = (float)sum / NUM;
	return high;
}
