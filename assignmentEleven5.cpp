//Salleh Jahaf Assignment 11 # 5

#include <stdio.h>

float calcOTPay(int, float);

int main()
{
	float overtimePay;
	int overtimeHours;
	
	if (hoursWorked > 40)
		{ overtimeHours = hoursWorked - 40; 
		  overtimePay = calcOTPay(overtimeHours, payRate);
		}
		
	return 0;
}

float calcOTPay(int otHours, float rate)
{
	float otPay;
	otPay = otHours * rate * 1.5;
	return otPay;
}
