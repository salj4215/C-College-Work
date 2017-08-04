#include <stdio.h>
#include <stdlib.h>

struct Inventory
{
	char name[10];
	int qty;
	float price;
};

typedef struct Inventory IV;

int main()
{
	FILE *inFile;
	char fileName[20];
	IV iArray[5];
	int iStatus, x=0;
	float total;
	
	printf("Enter filename: ");
	gets(fileName);
	
	inFile = fopen(fileName, "r");
	
	if (inFile == NULL)
	{
		printf("Error opening file");
		exit(1);
	}
	
	iStatus = fscanf(inFile, "%10s %d %f", iArray[x].name, &iArray[x].qty, &iArray[x].price);
	//fgets(name, 20, inFile);
	while (iStatus > 0)
	{
	total = iArray[x].qty * iArray[x].price;
	printf("\n%s\t%d\t%.2f\t%.2f", iArray[x].name, iArray[x].qty, iArray[x].price, total);
	x++;
	iStatus = fscanf(inFile, "%10s %d %f", iArray[x].name, &iArray[x].qty, &iArray[x].price);
	}
	
	fclose(inFile);
	
	return 0;
}
