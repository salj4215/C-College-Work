 //Joshua N Cliff & Salleh Jahaf
//Dice Roller Program

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//prototype

void menu(void);
int rollDie(void);
int addTwoNums(int, int);
void determineWinner(int, int);

int main ()
{
	srand(time(NULL));
	int p1d1, p1d2, p2d1, p2d2, p1tot, p2tot;
	char ans;
	menu();
	
	printf(" DO YOU WISH TO ENGAGE IN COMBAT? (Y/N)");
	scanf("%c", &ans);
	
	if (ans == 'Y')
	{
	p1d1 = rollDie();
	p1d2 = rollDie();
	printf("\n PLAYER ONE ROLLED A %d AND A %d!", p1d1, p1d2);
	p2d1 = rollDie();
	p2d2 = rollDie();
	printf("\n PLAYER TWO ROLLED A %d AND A %d!", p2d1, p2d2);
	
	p1tot = addTwoNums(p1d1, p1d2);
	p2tot = addTwoNums(p2d1, p2d2);
	
	determineWinner(p1tot, p2tot);
	}
	else
	printf("\n THEN WHY DID YOU OPEN THE PROGRAM?");
	printf("\n\n\5 - - - - - - - - - - \4 - - - - - - - - - - \5\n\n");
}

void menu(void)
{
	printf("\n\5 - - - - - - - - - - \4 - - - - - - - - - - \5\n\n");
	printf(" WELCOME TO THE FABULOUS DICE ROLLING GAME!\n\n");
	printf(" This program will roll two dice for two\n   combatants, compare the totals, and\n            reveal the victor!");
	printf("\n\n\5 - - - - - - - - - - \4 - - - - - - - - - - \5\n\n");
}

int rollDie(void)
{
	int roll;
	
	roll = ((int) rand() % 6) + 1;
	
	return roll;
}

int addTwoNums(int d1, int d2)
{
	int tot;
	tot = d1 + d2;
	return tot;
}

void determineWinner(int p1, int p2)
{
	if (p1 > p2)
	printf("\n\n PLAYER ONE WINS WITH A TOTAL OF %d POINTS!", p1);
	else
	printf("\n\n PLAYER TWO WINS WITH A TOTAL OF %d POINTS!", p2);
	
	printf("\n\n\5 - - - - - - - - - - \4 - - - - - - - - - - \5\n\n");
}
