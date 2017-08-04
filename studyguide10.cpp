//Study guide #10

#include <stdio.h>

int main()
{
	char msg[81];
	int x; 
	char *cptr;
	cptr = &msg[4];
	
	
	printf("Enter a string: ");
	gets(msg);
	
for ( x = 0; x < 6; ++x)
	printf("%c", *(cptr + x));
	
	return 0;
}
