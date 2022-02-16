#include <stdio.h>

int main() {
	double scoreOne;
	double scoreTwo;
	double result;
	
	printf("Escreva a primeira nota: ");
	scanf("%lf", &scoreOne);
	
	printf("Escreva a segunda nota: ");
	scanf("%lf", &scoreTwo);
	
	result = ((scoreOne * 3.5) + (scoreTwo * 7.5)) / 11;
	
	printf("O resultado foi: %lf", result);
	return 0;
}
