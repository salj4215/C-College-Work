//Salleh Jahaf Final Exam
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct CPU
{
	int manID;
	int modNum;
	float speed;
	float price;
};

struct RAM
{
	int size;
	int speed;
	float price;
};

typedef struct CPU CP;
typedef struct RAM RM;

float userInput(int *, char[]);
float calcTotal(CP [], RM [], char[], int, float);

int main()
{
	CP cArray[5];
	RM mArray[5];
	int x=0;
	char str[80], name[20];
	float CPUSpeed, totalCost;
	int ramSize;
	FILE *inFile1;
	FILE *inFile2;
	char *p;
	char *q;
	
	inFile1 = fopen("cpu.txt", "r");
	
	if (inFile1 == NULL)
	{
		printf("Error opening file.");
		exit(1);
	}
	
	while (fgets(str, 80, inFile1) != NULL)
	{
		p = strtok(str, ", ");
		cArray[x].manID = atoi(p);
		//printf("%d\n", cArray[x].manID);
		p = strtok(NULL, ", ");
		sscanf(p, "%d", &cArray[x].modNum);
		//printf("%d\n", cArray[x].modNum);
		p = strtok(NULL, ", ");
		cArray[x].speed = atof(p);
		//printf("%.1f\n", cArray[x].speed);
		p = strtok(NULL, ", ");
		sscanf(p, "%f", &cArray[x].price);
		//printf("%.2f\n", cArray[x].price);
		x++;
	}
	fclose(inFile1);
	
	inFile2 = fopen("ram.txt", "r");
	
	if (inFile2 == NULL)
	{
		printf("Error opening file.");
		exit (1);
	}
	
	x=0;
	
	while (fgets(str, 80, inFile2) != NULL)
	{
		q = strtok(str, ", ");
		mArray[x].size = atoi(q);
		//printf("%d\n", mArray[x].size);
		q = strtok(NULL, ", ");
		sscanf(q, "%d", &mArray[x].speed);
		//printf("%d\n", mArray[x].speed);
		q = strtok(NULL, ", ");
		mArray[x].price = atof(q);
		//printf("%.2f\n", mArray[x].price);
		x++;
	}
	fclose(inFile2);
	
	CPUSpeed = userInput(&ramSize, name);
	totalCost = calcTotal(cArray, mArray, name, ramSize, CPUSpeed);
	
	printf("The total cost of the custom computer parts for %s is $%.2f", name, totalCost);
	
	return 0;
}

float userInput(int *size, char name[])
{
	float speed;
	int RAM;
	printf("Please enter your name: ");
	gets(name);
	fflush(stdin);
	printf("What is the desired speed for the CPU?");
	scanf("%f", &speed);
	printf("What is the desired RAM size?");
	scanf("%d", &RAM);
	*size = RAM;
	
	return speed;
}
float calcTotal(CP CPU[], RM MEM[], char name[], int mem, float cSpeed)
{
	int x;
	float cpuPrice, ramPrice, total;
	
	for (x=0; x < 5; x++)
	{
		if (cSpeed == CPU[x].speed)
		{
		 printf("The CPU is Model # %d and has a speed of %.1f GHZ\n", CPU[x].manID, CPU[x].speed);
		 cpuPrice = CPU[x].price;
		}
	}
	for (x=0; x < 5; x++)
	{	
		if (mem == MEM[x].size)
		{
		printf("The RAM size is %d GB and has a speed of %d mps\n", MEM[x].size, MEM[x].speed);
		ramPrice = MEM[x].price;
		}
	}
	total = cpuPrice + ramPrice;
	return total;
}

