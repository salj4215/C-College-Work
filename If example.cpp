//Salleh Jahaf

#include <stdio.h>

int main()
{
	char answer;
	int age;
	printf("Enter your age");
	scanf("%d", &age);
	if(age>=18)
	{
		printf("You are able to vote");
		printf("\nAre you going to vote (Y or N)?");
		scanf("\n%c",&answer);
	}
	else
		printf("\nYou are not able to vote");
	printf("\nYou are %d years old",age);
	return 0;
}

