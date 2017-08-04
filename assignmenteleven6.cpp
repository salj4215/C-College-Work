//Salleh Jahaf Assignment 11 #6

#include <stdio.h>

//prototype
float calcRetirement(float, float);

int main()
{
	float retContribution;
	
	retContribution = calcRetirement(regPay, overtimePay);
	
	return 0;
}

float calcRetirement(float rPay, float otPay)
{
	float retCont, grossPay;
	char answer;
	
	printf("There is a retirement plan we provide that takes 3%% of your gross pay and into a retirement account.");
	printf("\nWould you like to participate in the retirement plan?(y or n)");
	scanf("\n%c", &answer);	
	if (answer == 'y')
	{grossPay = rPay + otPay;
	retCont = grossPay * 0.03;
	}
	else
		retCont = 0;
	return retCont;
}
