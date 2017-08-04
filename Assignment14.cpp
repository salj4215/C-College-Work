//Salleh Jahaf Assignment 14

#include <stdio.h>

int main()
{
	//define variables
	int inventoryItem[10]; 
	int x, y; 
	int iTemp;
	float price[10];
	float fTemp;
	int search, found = 0;
	char answer, sorting;
	
	//User enters values into parallel arrays
	for (x = 0; x < 10; ++x)
	{
		printf("Enter the inventory number: ");
		scanf("%d", &inventoryItem[x]);
		printf("Enter the price: ");
		scanf("%f", &price[x]);
	}
	

	//User will search array using inventory item number
	while (answer != 'N')
	{
		found = 0;
		//User will enter in an inventory number to search for
		printf("Enter the inventory item number to search for: ");
		scanf("%d", &search);
	//Searches array for inventory number	
	for (x = 0; x < 10; ++x)
	{
		if(search == inventoryItem[x])
			{//if found
				printf("Price for %d is $%.2f\n", inventoryItem[x], price[x]);
				found = 1;
			}
	}
	if (found != 1) //if not found
	printf("Item not found!\n");
	
	//Ask user if they want to search for another number
	printf("Search for another item? (N to end)");
	scanf("\n%c", &answer);
	}
	
	//ask user how they want the data sorted
	printf("Do you wish to sort by (I) inventory number or (P) price: ");
	scanf("\n%c", &sorting);
	
	//if sorting by inventory
	if (sorting == 'I')
		{
			for (y = 0; y < 9; ++y)
			{
				for (x = 0; x < 9; ++x)
				{
					if (inventoryItem[x] > inventoryItem[x + 1])
					{
						iTemp = inventoryItem[x];
						fTemp = price[x];
						inventoryItem[x] = inventoryItem[x + 1];
						price[x] = price[x + 1];
						inventoryItem[x + 1] = iTemp;
						price[x + 1] = fTemp;
					}
				}
			}
			//print to user sorted data
			printf("\nIn order sorted by Inventory Number\n");
			printf("\nInventory Item     Price\n");
			
			for (x = 0; x < 10; ++x)
			{
			printf("\n     %d", inventoryItem[x]);
			printf("\t   $%.2f", price[x]);
			}
		}
		
	//if sorting by price	
	if (sorting == 'P') {
			for (y = 0; y < 9; ++y)
			{
				for (x = 0; x < 9; ++x)
				{
				if (price[x] > price[x + 1])
				{
						iTemp = inventoryItem[x];
						fTemp = price[x];
						inventoryItem[x] = inventoryItem[x + 1];
						price[x] = price[x + 1];
						inventoryItem[x + 1] = iTemp;
						price[x + 1] = fTemp;
				}
				}
			}
			//print to user sorted data
			printf("\nIn order sorted by Price\n");
			printf("\nInventory Item     Price\n");
			
			for (x = 0; x < 10; ++x)
			{
			printf("\n     %d", inventoryItem[x]);
			printf("\t   $%.2f", price[x]);
			}
		}
			
					
		
	
	return 0;
}
