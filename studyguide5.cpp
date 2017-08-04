#include <stdio.h>

int main()
{
	int x, sum = 0;
	
	for (x = 100; x <= 200; x+=5)
	{
		printf("\n%d", x);
		sum+=x;
	}
	
	printf("\n%d", sum);
}

