#include <stdio.h>
#include <string.h>

int main()
{
	char msg[81];
	
	printf("Please enter a string: ");
	gets(msg);
	
	printf("You typed in %s", msg);
	printf("\nYour string is %d characters long", strlen(msg));
	return 0;
}
