// Salleh Jahaf

#include <stdio.h>

int main ()
{
	int firstNum;
	int secondNum, total, product, quotient, remainder;
	
	// input 2 numbers
	
	printf("Enter a number: ");
	scanf("%d", &firstNum);
	printf("Enter another number: ");
	scanf("%d", &secondNum);
	
	//process -- add 2 numbers together
	//math only on right side of =
	total = firstNum + secondNum;
	product = firstNum * secondNum;
	quotient = firstNum / secondNum;
	remainder = firstNum % secondNum;
	
	// output the answer
	printf("The total of %d and %d", firstNum, secondNum);
	printf(" is %d", total);
	printf("\nThe product is %d", product);
	printf("\nThe quotient is %d", quotient);
	printf("\nThe remainder is %d", remainder);
	
	return 0;
	
}
