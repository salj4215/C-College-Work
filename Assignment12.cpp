//Salleh Jahaf Assignment 12

#include <stdio.h>

struct Warehouse //define structure
{
	char item[10];
	int quantity;
	float price;	
};

typedef struct Warehouse WH;

int main()
{	//populate structure
	WH s1 = {"Carrots", 400, 1.59};
	WH s2 = {"Bananas", 560, 3.49};
	WH s3 = {"Apples", 200, 1.49};
	
	//output
	printf("Item"); 
	printf("\t\tQuantity");
	printf("\tPrice");
	printf("\n%s", s1.item);
	printf("\t\t%5d", s1.quantity);
	printf("\t\t$%.2f", s1.price);
	printf("\n%s", s2.item);
	printf("\t\t%5d", s2.quantity);
	printf("\t\t$%.2f", s2.price);
	printf("\n%s", s3.item);
	printf("\t\t%5d", s3.quantity);
	printf("\t\t$%.2f", s3.price);
	
	
	return 0;
}
