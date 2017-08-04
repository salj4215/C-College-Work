//Salleh Jahaf

#include <stdio.h>

//prototypes

void printInstructions(void);
void averageGrades(int, int, int, int, int);  //recieves 5 grades and returns nothing
char letterGrade(int);//recieves one grade and returns a letter
int main()
{
	int s1, s2, s3, s4, s5;
	char let;
	printInstructions();
	printf("\nEnter score: ");
	scanf("%d", &s1);
	printf("Enter score: ");
	scanf("%d", &s2);
	printf("Enter score: ");
	scanf("%d", &s3);
	printf("Enter score: ");
	scanf("%d", &s4);
	printf("Enter score: ");
	scanf("%d", &s5);
	averageGrades(s1,s2,s3,s4,s5);
	let = letterGrade(s1);
	printf("\nScore: %d, grade: %c", s1, let);
	let = letterGrade(s2);
	printf("\nScore: %d, grade: %c", s2, let);
	let = letterGrade(s3);
	printf("\nScore: %d, grade: %c", s3, let);
	let = letterGrade(s4);
	printf("\nScore: %d, grade: %c", s4, let);
	let = letterGrade(s5);
	printf("\nScore: %d, grade: %c", s5, let);
	return 0;
}

void printInstructions(void)
{
	printf("This program will");
	printf("\nask for 5 scores");
	printf("\nand print the letter grade");
	printf("\nand then average the grades");
}

void averageGrades(int s1, int s2, int s3, int s4, int s5)
{
	int total;
	float avg;
	total = s1 + s2 + s3 + s4 + s5;
	avg = total / 5.0; //or avg = (float)total / 5
	printf("\nClass average is %.2f", avg); 
}

char letterGrade(int num)
{
	char grade;
	if (num >=90)
		grade = 'A';
	else if (num >= 80)
		grade = 'B';
	else if (num >= 70)
		grade = 'C';
	else if (num >= 60)
		grade = 'D';		
	else 
		grade = 'E';
		
	return grade;	
}
