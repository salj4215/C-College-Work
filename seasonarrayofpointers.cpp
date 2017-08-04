#include <stdio.h>

int main()
{
	char *pArray[4] = {"Winter", "Spring", "Summer", "Fall"};
	int num, n;
	
	printf("Enter a month in numeric form: ");
	scanf("%d", &num);
	
	n = (num % 12) / 3;
	printf("Your month is in the %s season", pArray[n]);
	
	return 0;
}
