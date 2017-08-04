//Salleh Jahaf

#include <stdio.h>

int main()
{
	char str[81];
	int x, count = 0;
	printf("Enter a string:");
	gets(str);
	//scanf("%s", str); //no & for strings
	printf("Your string is: %s", str);
	
	for(x = 0; str[x] != '\0'; x++)
	{
		switch(str[x]) //if (str[x] =='a' || str[x] == 'e'
		{
			case 'a' : case 'A' :
			case 'e' : case 'E' :
			case 'i' : case 'I' :
			case 'o' : case 'O' :
			case 'u' : case 'U' :
				++count;
		}
	}
	printf("\nThere are %d vowels in the string", count);
	printf("\nYour string has %d characters", x);
	return 0;
}
