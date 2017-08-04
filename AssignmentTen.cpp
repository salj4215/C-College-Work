//Salleh Jahaf Assignment 10

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int vowelCounter[5]; //array to hold number of each vowel
	char msg[81];        //string array
	int x;				//use in for loop
	
	printf("Please enter a string: ");
	gets(msg);         //get string from user
	
	//set array indexes to 0
	vowelCounter[0] = 0;
	vowelCounter[1] = 0;
	vowelCounter[2] = 0;
	vowelCounter[3] = 0;
	vowelCounter[4] = 0;
	
	//for loop to count vowels and capitalize every 5th letter
	for (x = 0; msg[x] != '\0'; x++)
	{	
		if (x % 5 == 0 && x != 0) //if every 5th letter
			msg[x] = toupper(msg[x]); //capitalize letter
		
		switch (msg[x]) //count every vowel
		{
		case 'a' : case 'A' : //if 'A', count with array
			vowelCounter[0]++;
			break;
		case 'e' : case 'E' : //if 'E', count with array
			vowelCounter[1]++;
			break;
		case 'i' : case 'I' : //if 'I', count with array
			vowelCounter[2]++;
			break;
		case 'o' : case 'O' : //if 'O', count with array
			vowelCounter[3]++;
			break;
		case 'u' : case 'U' : //if 'U', count with array
			vowelCounter[4]++;
			break;
	}
		
	}
	//output to user
	printf("Your string is: %s", msg);
	printf("\nThere are %d a's in the string", vowelCounter[0]);
	printf("\nThere are %d e's in the string", vowelCounter[1]);
	printf("\nThere are %d i's in the string", vowelCounter[2]);
	printf("\nThere are %d o's in the string", vowelCounter[3]);
	printf("\nThere are %d u's in the string", vowelCounter[4]);
	printf("\nThere are %d characters in the string", x);
	
	return 0;
}
