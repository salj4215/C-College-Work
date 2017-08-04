//struct card
#include <stdio.h>

struct Card
{
	char suit[10];
	int value;
};

typedef struct Card CD;
int num = 5;

CD getData (void);
void printData(CD);

int main()
{
	CD card1;
	num++;
	
	card1 = getData();
	printf("\nnum is %d", num);
	printData (card1);
	printf("\nnum is %d", num);
	
	return 0;
}

CD getData(void)
{
	int num = 20;
	CD temp;
	
	num++;
	printf("Enter suit of card:");
	gets(temp.suit);
	printf("Enter value: ");
	scanf("%d", &temp.value);
	
	return temp;
}

void printData(CD temp)
{
	printf("Card: %d of %s", temp.value, temp.suit);
	num++;
}
