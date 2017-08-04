//Salleh Jahaf Assignment 11 #4

#include <stdio.h>

//prototype
float calcRegPay(int, float);

int main()
{
	float regPay;
	
	regPay = calcRegPay(hoursWorked, payRate);
	
	
	return 0;
}

float calcRegPay(int hours, float rate)
{
	float pay;
	pay = hours * rate;
	
	return pay;
}
