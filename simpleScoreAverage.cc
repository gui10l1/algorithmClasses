#include <stdio.h>

#define Average 2;
#define NecessaryToPass 9.5

int main() {
	double firstScore, secondScore, totalScore;
	
	printf("Insira a primeira nota: ");
	scanf("%lf", &firstScore);
	
	printf("Insira a segunda nota: ");
	scanf("%lf", &secondScore);
	
	totalScore = (firstScore + secondScore) / Average;
	
	if (totalScore >= NecessaryToPass) {
	    printf("Parabéns, passou!");
	    return 0;
	} else {
	    printf("Reprovou, tente novamente!");
	    return 0;
	}
}
