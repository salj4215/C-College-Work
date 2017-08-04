//Salleh Jahaf Test2_1

#include <stdio.h>
#include <string.h>

int main()
{
	char strg[81]; //string array
	int stringLength, x; //integer variables
	
	
	printf("Please enter a string:"); //output to user
	gets(strg); //assigns user input to array
	
	stringLength =  strlen(strg); //determine number of characters in string 
	
	for (x = stringLength; x >= 0;x--) //for loop, initialize at number of characters in string and decrement by 1
	{
		if (strg[x] != '\0') //removes null from backwards string
		printf("%c", strg[x]); //prints string backwards from max number of index to index 1
	}
	
	return 0;
}

