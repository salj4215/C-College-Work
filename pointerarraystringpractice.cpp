#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
char string[81];
int x;
char *strPointer;
int strLength;

	printf("Please type a string: ");
	gets(string);

	strLength = strlen(string);
	strPointer = string;
	
	for (x=0;x<strLength;x++)
	printf("\n%c", *strPointer++);
	
	return 0;
}
