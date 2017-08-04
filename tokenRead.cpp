#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *inPtr;
	int iStatus, age, weight;
	char fName[20];
	char name[10];
	char str[80];
	char *p;
	
	printf("Enter the file name: ");
	gets(fName);
	
	inPtr = fopen(fName, "r");
	if (inPtr == NULL)
	{
		printf("Error opening file");
		exit (1);
	}
	
	iStatus = fscanf(inPtr, "%s", str);
	while (iStatus != NULL)
	{
		p = strtok(str, ", ");
		strcpy(name, p);
		puts(name);
		p = strtok(NULL, ",");
		sscanf(p, "%d", &weight);
		printf("\n%d", weight);
		p = strtok(NULL, ",");
		sscanf(p, "%d", &age);
		printf("\n%d", age);
		iStatus = fscanf(inPtr, "%s", str);
	}
	
	return 0;
}
