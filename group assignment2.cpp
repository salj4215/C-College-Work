//Adham Alsalah, Josh Cliff, Salleh Jahaf

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct DogInfo
{
	char dogName[25]; //name of Dog
	int dogWeight;	//weight of dog
	int dogAgeHumanY;	//
	char dogWeightClass[11];
	int dogAgeDogY;
};

typedef struct DogInfo DI;

void calc(DI []);
void sort(DI []);
void display(DI []);

int main()
{
	//Open File
	FILE *inFile;
	int iStatus=1, age, weight, x=0;
	char name[10];
	char str[80];
	char *p;
	//Struct Array
	DI iArray[6];
	
	//Filename
	inFile = fopen("dogfile.txt", "r");
	
	if (inFile == NULL)// Check if Valid
	{
		printf("Error opening file.");
		exit(1);
	}
	

	while (fgets(str, 80, inFile) != NULL) //Read File
	{
	p = strtok(str, ", "); //tells the program to take the first string before the comma and store it in the addres of p
	strcpy(iArray[x].dogName, p); //copy p into the dogname array
	puts(iArray[x].dogName); //print string
	p = strtok(NULL, ", "); //clear p
	iArray[x].dogWeight = atoi(p);// string to int converter
	printf("%d\n", iArray[x].dogWeight); //print dogweight
	p = strtok(NULL, ", "); //p is the third string(it's an int)
	sscanf(p, "%d", &iArray[x].dogAgeHumanY); //load p into dogageHumanY
	printf("%d\n", iArray[x].dogAgeHumanY); //print human Y
	x++;
	}
	
	calc(iArray); //function call to calc
	sort(iArray);	//function call to sort
	display(iArray);	//functino call to display
	
	fclose(inFile); //close the file
	return 0;
}

void calc(DI temp[])
{
	int x; //int variable for a loop
	char *p; //pointer
	
	for (x=0;x<6;x++)
	{
		if (temp[x].dogWeight < 21) // if the dog's weight is less than 21, make the weight class say "Small dog"
		{
			p = "Small dog";
			strcpy(temp[x].dogWeightClass, p);
			if (temp[x].dogAgeHumanY < 2) //if the small dog is less then 2 years old it is 15 in dog years
			{
				temp[x].dogAgeDogY = 15;
			}
			else if (temp[x].dogAgeHumanY < 3) //similiar to above if segment so it's if less that 3 so on and so forth
			{
				temp[x].dogAgeDogY = 23;
			}
			else if (temp[x].dogAgeHumanY < 4)
			{
				temp[x].dogAgeDogY = 28;
			}
			else //anything 4 years and older increments 4 for each year more than 3
				temp[x].dogAgeDogY = (temp[x].dogAgeHumanY - 3) * 4 + 28;
		}
		else if (temp[x].dogWeight < 51) //same as above but for dogs weighing less than 51 and above 21
		{
			p = "Medium dog";
			strcpy(temp[x].dogWeightClass, p);
			if (temp[x].dogAgeHumanY < 2)
			{
				temp[x].dogAgeDogY = 14;
			}
			else if (temp[x].dogAgeHumanY < 3)
			{
				temp[x].dogAgeDogY = 23;
			}
			else if (temp[x].dogAgeHumanY < 4)
			{
				temp[x].dogAgeDogY = 30;
			}
			else
				temp[x].dogAgeDogY = (temp[x].dogAgeHumanY - 3) * 5 + 30;
		}
		else //anything above 51
		{
			p = "Large dog";
			strcpy(temp[x].dogWeightClass, p);
			if (temp[x].dogAgeHumanY < 2)
			{
				temp[x].dogAgeDogY = 12;
			}
			else if (temp[x].dogAgeHumanY < 3)
			{
				temp[x].dogAgeDogY = 21;
			}
			else if (temp[x].dogAgeHumanY < 4)
			{
				temp[x].dogAgeDogY = 29;
			}
			else
				temp[x].dogAgeDogY = (temp[x].dogAgeHumanY - 3) * 7 + 29;
		}
	}
	
}

void sort(DI temp[])
{
	DI t;//temperary DI
	int x, y; //loop variables
	int userChoice; //self explanatory, it's to help pick the users choice
	do {	//validation check to make sure the user only picks 1 or 0 for the options
	printf("Would you like to sort by Name(0) or Size(1): ");
	scanf("%d", &userChoice);
	
	if (userChoice < 0 || userChoice > 1)
		{
			printf("\nYou only have two choices\n");
		}
	} while (userChoice < 0 || userChoice > 1);
	
	if (userChoice == 1) //if user picks one sort by weight
		{
		
			for (x=0;x<6;++x)
				{
					for (y = 5; y > x; --y) //this is a bubble sort going backwards
						{
							if (strcmp(temp[y-1].dogWeightClass, temp[y].dogWeightClass) > 0) //strcmp checks which string is bigger: first or second, if they're equal they're 0
																							 //if they're less than 0 string 1 is smaller, bigger means string 2 is bigger
								{
									t = temp[y-1]; //simply switching places
									temp[y-1] = temp[y];
									temp[y] = t;
								}
						}
				}	
		}	
		
	if (userChoice == 0) //if user picks 0 sort by name
		{
			for (x=0;x<6;++x)
				{
					for (y = 5; y > x; --y)
						{
							if (strcmp(temp[y-1].dogName, temp[y].dogName) > 0) //check comment starting line 155 through 156
								{
									t = temp[y-1]; //check line 174
									temp[y-1] = temp[y];
									temp[y] = t;
								}
						}
				}	
		}		
}

void display(DI temp[])
{
	int x; // For Loop Variable
printf("Dog Name\tDog Weight\tHuman Years\tDog Years\n");
printf("--------------------------------------------------------");

for (x=0;x<6; ++x)
printf("\n%s\t\t%s\t%d\t\t%d", temp[x].dogName, temp[x].dogWeightClass, temp[x].dogAgeHumanY, temp[x].dogAgeDogY);
}
