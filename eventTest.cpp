#include <stdio.h>

struct Event
{
	int eventNum;
	int guests;
	float extra;
	float price;
};

typedef struct Event EV;

int main()
{
	EV eEvent;
	EV *ePtr;
	ePtr = &eEvent;
	
		printf("Enter event number: ");
		scanf("%d", &(*ePtr).eventNum);
		printf("Enter the number of guests: ");
		scanf("%d", &ePtr->guests);
		
		printf("Enter number: %d ", ePtr->eventNum);
		printf("and number of guests: %d", ePtr->guests);

	return 0;
}
