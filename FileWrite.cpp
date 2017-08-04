#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *outFile;
	char fileName[15], item[10];
	int x, qty, itemNum;
	
	printf("Enter the filename: ");
	gets(fileName);
	
	outFile = fopen(fileName, "w");
	//w - write w+ - erases and opens to read and write
	//r - read r+ - opens existing file for read and write
	//a - append a+ - read, write and append
	
	if (outFile == NULL)
	{
		printf("\nThe file cannot be opened");
		exit(1);
	}
	printf("\nThe file has been successfully opened");
	
	fprintf(outFile, "%s\n", "         Item        Number     Quantity\n");
	
	for (x = 0; x < 3; ++x)
	{
		printf("\nEnter the item name: ");
		fflush(stdin);
		gets(item);
		printf("Enter the item number: ");
		scanf("%d", &itemNum);
		printf("\nEnter the quantity: ");
		scanf("%d", &qty);
		fprintf(outFile, "%15s %10d %10d\n", item, itemNum, qty);
	}
	
	fclose(outFile);
	
	return 0;
}
