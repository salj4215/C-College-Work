#include <stdio.h>
#include <stdlib.h>

struct familyCars
{
	char carMake[20];
	char carModel[20];
	char licensePlate[4];
	char owner[30];
};

typedef struct familyCars FC;
void display(FC []);

int main()
{
	FC cArray[3];
	int x;
	FILE *outFile;
	char fileName[20];
	
	printf("Please enter name of file:");
	gets(fileName);
	
	outFile = fopen(fileName, "w");
	
	if (outFile == NULL)
	{
		printf("\nThe file could not be opened");
		exit(1);
	}
	
	fprintf(outFile, "\nMake     Model     License plate\tOwner");
	
	for(x=0;x<3;x++)
	{
		printf("Please enter car make:");
		fflush(stdin);
		gets(cArray[x].carMake);
		fprintf(outFile, "\n%s", cArray[x].carMake);
		printf("Please enter car model:");
		fflush(stdin);
		gets(cArray[x].carModel);
		fprintf(outFile, "     %s", cArray[x].carModel);
		printf("Please enter first three letters of the license plate:");
		fflush(stdin);
		gets(cArray[x].licensePlate);
		fprintf(outFile, "     %s", cArray[x].licensePlate);
		printf("Please enter name of owner:");
		fflush(stdin);
		gets(cArray[x].owner);
		fprintf(outFile, "\t%s", cArray[x].owner);
		fflush(stdin);
	}
	
	display(cArray);
	fclose(outFile);
	
return 0;	
};

void display(FC temp[])
{
	int x;
	
	for(x=0;x<3;x++)
	{
		printf("\n%s\t%s\t%s\t%s", temp[x].carMake, temp[x].carModel, temp[x].licensePlate, temp[x].owner);
	}
	
};
