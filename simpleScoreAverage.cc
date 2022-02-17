#include <stdio.h>

#define Average 2
#define NecessaryToPass 9.5
#define Frequency 14

int main() {
	double firstScore, secondScore, totalScore, frequencyPercentage, studentFrequency;
	
	printf("Insira a primeira nota: ");
	scanf("%lf", &firstScore);
	
	printf("Insira a segunda nota: ");
	scanf("%lf", &secondScore);
	
	printf("Insira a frequência do aluno: ");
	scanf("%lf", &studentFrequency);
	
	frequencyPercentage = studentFrequency / Frequency * 100;
	totalScore = (firstScore + secondScore) / Average;
	
	if (totalScore >= NecessaryToPass && frequencyPercentage == 100) {
	    printf("Parabéns, passou com nota %.2lf e frequencia %.1lf", totalScore, frequencyPercentage);
	    return 0;
	} else {
	    printf("Reprovou com nota %.2lf e frequencia %.1lf, tente novamente!", totalScore, frequencyPercentage);
	    return 0;
	}
}
