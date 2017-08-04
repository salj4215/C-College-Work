//Salleh Jahaf
//for loop example
#include <stdio.h>
#define STUDENT 16


int main ()
{
	int x, score;
	int total = 0;
	float average;
	
	for (x = 0; x < STUDENT; x++)
	{
		printf("Enter score #%d: ", x + 1);
		scanf("%d", &score);
		total = total + score;
	}
	average = total / (float) STUDENT;
	//(float) casts or changes STUDENT into a float
	printf("Class average is %.2f", average);
	
	return 0;
}
