//Salleh Jahaf Assignment 11 #4

#include <stdio.h>

//prototype
float calcRegPay(int, float);

int main()
{
	float regPay, payRate = 15.00;
	int hoursWorked = 40;
	
	regPay = calcRegPay(hoursWorked, payRate);
	
	printf("%.2f", regPay);
	return 0;
}

float calcRegPay(int hours, float rate)
{
	float pay;
	pay = hours * rate;
	
	return pay;
}
