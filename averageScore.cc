#include <stdio.h>

#define AverageOne 3.5
#define AverageTwo 7.5
#define TotalScore 11

int main() {
	double scoreOne;
	double scoreTwo;
	double result;
	
	printf("Escreva a primeira nota: ");
	scanf("%lf", &scoreOne);
	
	printf("Escreva a segunda nota: ");
	scanf("%lf", &scoreTwo);
	
	result = ((scoreOne * AverageOne) + (scoreTwo * AverageTwo)) / TotalScore;
	
	printf("O resultado foi: %.5lf", result);
 	return 0;
}
