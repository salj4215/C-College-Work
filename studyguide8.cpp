#include <stdio.h>
#include <ctype.h>
#define PI 3.14

void printHeader(void);
void calcArea (void);

int main()
{
	printHeader();
	calcArea();
	
	return 0;
}

void printHeader(void)
{
	printf("This program will calculate the area. Which would you like to do?\n");
	printf("\tR - calculate area of Rectangle\n");
	printf("\tC - calculate area of Circle\n");
	printf("\tS - calculate area of Square\n");
}

void calcArea(void)
{
	char choice;
	int rectLength, rectWidth, squareSide; 
	float area, cirRadius;
	
	printf("Choice: ");
	scanf("\n%c", &choice);
	
	switch (choice)
	{
		case 'R' :
			printf("What is the length of the rectangle?");
			scanf("%d", &rectLength);
			printf("\nWhat is the width of the rectangle?");
			scanf("%d", &rectWidth);
			area = rectLength * rectWidth;
			printf("\nThe area of the rectangle is %.2f", area);
			break;
		case 'C' :
			printf("What is the Radius of the circle?");
			scanf("%f", &cirRadius);
			area = PI * (cirRadius * cirRadius);
			printf("\nThe area of the circle is %.2f", area);
			break;
		case 'S' :
			printf("What is the length of the square?");
			scanf("%d", &squareSide);
			area = squareSide * squareSide;
			printf("\nThe area of the square is %.2f", area);
			break;
	}
	 
}
