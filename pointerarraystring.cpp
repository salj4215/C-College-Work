#include <stdio.h>
#include <stdlib.h>

int main()
{
	char msg[81];
	char *cPtr;
	int x=0;
	

	printf("Enter a message: ");
	gets(msg);
	
	cPtr = msg; //cPtr = &msg[0];
	
	while (*cPtr++) //true as long as *cPtr != NULL
		x++;
		
	*cPtr--;
	
	for (;x>=0; --x)
		printf("%c", *cPtr--);
		
		
	return 0;
}
