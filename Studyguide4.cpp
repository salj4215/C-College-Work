//Study guide #4

#include <stdio.h>



struct Sales
{
	char name[20];
	int month;
	int carSold;
};

typedef struct Sales SALES;
void display(SALES []);

int main()
{
	SALES sArray[5];
	int x;
	
	for (x=0;x<5;x++)
	{
		printf("Enter a name: ");
		fflush(stdin);
		gets(sArray[x].name);
		
		do
		{
			printf("Enter a month: ");
			scanf("%d", &sArray[x].month);
		} while (sArray[x].month < 1 || sArray[x].month > 12);
		printf("Enter the number of cars sold:");
		scanf("%d", &sArray[x].carSold);
	}
	display(sArray);
	
	return 0;
}

void display(SALES temp[])
{
	int x, total=0;
	
	for(x=0;x<5;x++)
	{
		printf("\n%s\t%d\t%d", temp[x].name, temp[x].month, temp[x].carSold );
		total += temp[x].carSold;
	}
	printf("\nGrand total is %d", total);
}
