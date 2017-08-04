//Salleh Jahaf

#include <stdio.h>
#include <string.h>

struct Alien
{
	char color[10];
	int legs;
	char planet[10];
	int iq;
};
typedef struct Alien AL;

AL getData(void);
void printData(AL);

int main()
{
	AL george;
	AL penelope;
	
	george = getData();
	penelope = getData();
	
	printData(george);
	printData(penelope);
	
	return 0;
}

AL getData(void)
{
	AL temp;
	printf("Enter color of alien: ");
	fflush(stdin);
	gets(temp.color);
	
	do
	{
		printf("Enter number of legs: ");
		scanf("%d", &temp.legs);
	} while (temp.legs < 0);
	
	do
	{
	printf("Planet: ");
	fflush(stdin); //Clears the keyboard buffer
	gets(temp.planet);
	} while ((strcmp(temp.planet, "Mars") != 0) && (strcmp(temp.planet, "Venus") != 0));
	//temp.planet != "Mars" || temp.planet != "Venus");
	
	printf("IQ: ");
	scanf("%d", &temp.iq);
	
	return temp;
}

void printData(AL temp)
{
	printf("\n\nAlien: \n   Color: %s", temp.color);
	printf("\n   Number of legs: %d", temp.legs);
	printf("\n   Planet: %s", temp.planet);
	printf("\n   IQ: %d", temp.iq);
}
