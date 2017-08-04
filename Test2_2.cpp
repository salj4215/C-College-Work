//Salleh Jahaf Test2_2

#include <stdio.h>
#include <string.h>

//prototype
void getData(float []);
float calcScore(float [], float *);

int main()
{
	char dName[81]; //character array for name
	float judgeScores[7]; //float array to store judge scores
	float difficulty, score; //float variables
	int x; //integer variable for loop
	
	printf("Enter the diver's name:"); //ask for diver name
	gets(dName); //assign name to character array
	getData(judgeScores); //call function
	difficulty = calcScore(judgeScores, &score); //call function
	
	printf("\nDiver's name: %s", dName); //print diver score summary
	printf("\nJudges scores:");
	for (x = 0; x < 7; x++)
	{
		printf("\n%.2f", judgeScores[x]);
	}
	printf("\nDegree of difficulty: %.2f", difficulty);
	printf("\nTotal score: %.2f", score);
	
	return 0;
}

void getData(float jScores[]) //code function
{
	int x; 
	int jNum = 0;
	
	for (x = 0; x < 7; x++) //for loop to enter scores
	{
		jNum++;
		printf("Enter judge %d score:", jNum);
		scanf("%f", &jScores[x]);
		if (jScores[x] < 0 || jScores[x] > 10)
			printf("Invalid score!\n");
	}
}
float calcScore (float jgScores[], float *score) //code function
{
	float highScore, lowScore, sum = 0.0, difficulty;
	int x;
	highScore = jgScores[0]; //initialize high score
	lowScore = jgScores[0]; //initialize low score
	for (x = 0; x < 7; x++)
	{
		if (highScore < jgScores[x]) //if judge score is higher than high score, assign judge score to high score
			highScore = jgScores[x];
		if (lowScore > jgScores[x]) //if judge score is lower than low score, assign judge score to low score
			lowScore = jgScores[x];	
		sum+=jgScores[x];	//add all judges' scores
	}
	sum = sum - highScore - lowScore; //drop highest and lowest score from sum
	
	printf("Enter degree of difficulty:");
	scanf("%f", &difficulty);
	if (difficulty < 1.2 || difficulty > 3.8)
		printf("Invalid difficulty!\n");
	
	*score = sum * difficulty * 0.6; //calculate score
	
	return difficulty;
}
