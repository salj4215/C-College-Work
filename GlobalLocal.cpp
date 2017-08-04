#include <stdio.h>

int apple, cherry;
void myfunction(void);

int main()
{
	int banana, i;
	
	apple = 5;
	banana = 8;
	cherry = 10;
	printf("\n %d", apple);
	printf("\t %d", banana);
	printf("\t %d", cherry);
	
	for (i = 0; i < 2; ++i)
		myfunction();
	printf("\n %d", apple);
	printf("\t %d", banana);
	printf("\t %d", cherry);
	
	return 0;	
	
}

void myfunction(void)
{
	static int apple = 15;
	int banana = 0;
	
	printf("\n %d", ++apple);
	printf("\t %d", ++banana);
	printf("\t %d", ++cherry);
	cherry = 20;
}
