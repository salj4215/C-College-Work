//Salleh Jahaf
#include <stdio.h>

void printHeader(void);
void findLarger(int, int);
int main()
{
	
	int num1, num2;
	printHeader();
	printf("\nEnter a number:");
	scanf("%d", &num1);
	printf("Enter another number:");
	scanf("%d", &num2);
	findLarger(num1, num2);
	return 0;
	
}

void printHeader(void)
{
	printf("Header");
}

void findLarger(int n1, int n2)
{
	
	if(n1>n2)
		printf("%d is larger", n1);
else
	printf("%d is larger", n2);
	
}

