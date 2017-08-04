//Assignment 11
//Trevia Verdell and Salleh Jahaf

#include <stdio.h>

float hoursWorked(void);//prototypes
int skill(float *);//prototypes with poimters
float calcRegPay(float, float);//prototype
float calcOTPay(float, float);//prototype
float calcRetirement(float, float);//prototype
void insurance(int *, int *, int *);//prototype with pointers
void display(int, float, float, float, float, int, int, int, float);//prototype

int main()

{
	float hours;
	int skillLevel;
	float hourlyRate;
	float regPay;
	float overtimePay = 0;
	float overtimeHours;
	float retContribution;
	int medical = 0, dental = 0, disability = 0; // variables for medical, dental, or disability options
	
	skillLevel = skill(&hourlyRate);//function call
	
	if (skillLevel == 2 || skillLevel == 3)// if statement to choose insurance
	insurance(&medical, &dental, &disability);
	

	printf("medical = %d, dental = %d, disability = %d", medical, dental, disability);//output
	
	hours = hoursWorked();//function call
	
	regPay = calcRegPay(hours, hourlyRate);
	
	if (hours > 40) //calculate overtime pay if users hours is above 40
		{ overtimeHours = hours - 40; 
		  overtimePay = calcOTPay(overtimeHours, hourlyRate);
		}
	
	if (skillLevel == 3)
	retContribution = calcRetirement(regPay, overtimePay);
	
	display(skillLevel, hourlyRate, hours, regPay, overtimePay, medical, dental, disability, retContribution);
	return 0;
}
float hoursWorked(void)//coding the function
{
	float hours;
	
	printf("\n\nEnter Hours Worked  ");
	scanf("%f", &hours);
	
	return hours;
}

int skill(float *hourlyRate)//coding function
{
	int skillLevel;
	
	while (skillLevel != 1 && skillLevel != 2 && skillLevel != 3) //data validation
	{
	printf("Skill Level");
	printf("\n\n1.\t20.25");
	printf("\n2.\t22.50");
	printf("\n3.\t26.75");
	printf("\nEnter your skill level: ");
	scanf("%d", &skillLevel);
	
	
	switch(skillLevel)
	{
		case 1:
		 *hourlyRate = 20.25;
		break;
		
		case 2:
		 *hourlyRate = 22.50;
		
		break;
		
		case 3:
		 *hourlyRate = 26.75;
		break;
		default:
			printf("Invalid selection! Please choose your correct skill level.\n");
	}
}
	return skillLevel;
}

float calcRegPay(float hours, float rate)//coding the function
{
	float pay;
	if (hours<=40) //if user hours is less than 40, calculate pay with users hours
	pay = hours * rate;
	else pay = 40 * rate; //if user hours is greater than 40, calculate pay for 40 hours
	return pay;
}

float calcOTPay(float otHours, float rate)//coding the function
{
	float otPay;
	otPay = otHours * rate * 1.5;
	return otPay;
}

float calcRetirement(float rPay, float otPay)//coding the function
{
	float retCont, grossPay;
	char answer;
	
	printf("\nThere is a retirement plan we provide that takes 3%% of your gross pay and into a retirement account.");//print to user
	printf("\nWould you like to participate in the retirement plan?(y or n)");
	scanf("\n%c", &answer);	//assign user response
	if (answer == 'y') //calculate retirement if user types y
	{grossPay = rPay + otPay;
	retCont = grossPay * 0.03;
	}
	else
		retCont = 0;
	return retCont;
}

void insurance (int *med, int *dent, int *dis)//function call
{
		// if any of these are 1, then they have opted in for that insurance
	printf("\nDo you wish to opt in to: ");
	printf("\nMedical   --  5.50 (1 for yes): ");
	scanf("%d", &*med);
	printf("\nDental  --    2.45 (1 for yes): " );
	scanf("%d", &*dent);
	printf("\nDisability -- 0.65 (1 for yes): ");
	scanf("%d", &*dis);
	
}

void display(int skillLevel, float payRate, float hours, float regularPay, float otPay, int medIns, int denIns, int disability, float retirement)//function call
{
	float grossPay, totalPay, deductions = 0;
	
	printf("\nBarnhill Fastener Company Payroll Calculator");
	printf("\n\nHours worked:\t\t%.2f", hours);
	printf("\nPay Rate:\t\t%.2f", payRate);
	printf("\nRegular Pay:\t\t%.2f", regularPay);
	printf("\nOverTime Pay:\t\t%.2f", otPay);
	grossPay = regularPay + otPay;
	printf("\nTotal Gross Pay:\t%.2f", grossPay);
	printf("\nDeductions:");
	
	if (medIns == 1)
	{printf("\n\tMedical:  $5.50");
	deductions = deductions + 5.50;
	}
	if (denIns == 1)
	{printf("\n\tDental:   $2.45");
	deductions = deductions + 2.45;
	}
	if (disability == 1)
	{printf("\n\tLong Term Disability: $0.65");
	deductions = deductions + 0.65;
	}
	if (deductions > grossPay) //let user know if deductions exceed gross pay
		printf("\nYour deductions exceed your gross pay.");
	else{
	totalPay = grossPay - deductions; 
	printf("\n\nTOTAL NET PAY:");
	printf("\t%.2f", totalPay);
	}
	
	
	
}
