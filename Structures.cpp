//Salleh Jahaf Structures

#include <stdio.h>

struct Address
{
	int streetNumber;
	char streetName[10];
	char city[10];
	char state[3];
	int zipcode;	
};

struct Student
{
	char name[30];
	//struct Address address;
	int studentNumber;
	char grade;
};

typedef struct Student ST;

int main()
{
	/*struct Student*/ ST s1= {"Timothy DaMour", 12345, 'A'};
	/*struct Student*/ ST s2;
	printf("%s", s1.name);
	printf("\nStudent number: %d", s1.studentNumber);
	printf("\nStudent grade: %c", s1.grade);
	
	printf("\nEnter the student name: ");
	gets(s2.name);
	printf("Enter the student number: ");
	scanf("%d", &s2.studentNumber);
	printf("Enter the student grade: ");
	scanf("\n%c", &s2.grade);
	//echo out the information
	printf("Name: %s", s2.name);
	printf("\nStudent number: %d", s2.studentNumber);
	printf("\nStudent grade: %c", s2.grade);
	
	return 0;
}
