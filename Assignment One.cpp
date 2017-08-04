//Salleh Jahaf

#include <stdio.h>

int main()
{
	int studentsHtml, studentsJava, studentsCpp, studentsCs, studentsJavaScript, studentsPhp, studentsPython, total, totalWebLang, totalObjOrLang;
	
	// print first line of output
	printf("Welcome to the Geekville Programming Survey\n");

	//prompt the user to enter the numbers
	printf("\nPlease enter the total number of students who know: \n");
	printf("\n\tHTML: ");
	scanf("%d", &studentsHtml);
	printf("\tJava: ");
	scanf("%d", &studentsJava);
	printf("\tC++: ");
	scanf("%d", &studentsCpp);
	printf("\tC#: ");
	scanf("%d", &studentsCs);
	printf("\tJavaScript: ");
	scanf("%d", &studentsJavaScript);
	printf("\tPhP: ");
	scanf("%d", &studentsPhp);
	printf("\tPython: ");
	scanf("%d", &studentsPython);
	
	//process input data, add up total of students, then sort into proper categories
	total = studentsHtml + studentsJava + studentsCpp + studentsCs + studentsJavaScript + studentsPhp + studentsPython;
	totalWebLang = studentsJavaScript + studentsPhp + studentsHtml;
	totalObjOrLang = studentsJava + studentsCpp + studentsCs + studentsPython;
	
	//output totals to screen
	printf("\n\n\nTotal students: %d", total);
	printf("\nTotal who know Web languages: %d", totalWebLang);
	printf("\nTotal who know Object Oriented languages: %d", totalObjOrLang);
	
	return 0;
	


}


