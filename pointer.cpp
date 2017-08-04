
#include <stdio.h>

int myFunction(int, int, int, float *, int *, char *); //* means pointer
				// pointers hold addresses
int main()
{
	int num1 = 5, num2 = 25, num3 = 36;
	int result;
	float average;
	int product;
	char wacky;
	
	result = myFunction(num1, num2, num3, &average, &product, &wacky);
						// send the address of average with &
	printf("The result is %d", result);
	printf("\nThe average is %.2f", average);
	printf("\nThe product is %d", product);
	printf("\nWacky holds %c", wacky);
	
	return 0;
}

int myFunction(int num1, int num2, int num3, float *avg, int *product, char *wacky)
{
	int answer;
	
	answer = num1 + num2 + num3;
	*avg = answer / 3.0;
	*product = num1 * num2 * num3;
	*wacky = (char)answer;
	
	return answer;
}
