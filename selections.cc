#include <stdio.h>

int main() {
  // Accepted values: 2, 3, 2, 6;
  // Not accepted values: 5, 6, 7, 8;
  
	int numberA, numberB, numberC, numberD;

	printf("Insira um número para A: ");
	scanf("%d", &numberA);
	
	printf("Insira um número para B: ");
	scanf("%d", &numberB);
	
	printf("Insira um número para C: ");
	scanf("%d", &numberC);
	
	printf("Insira um número para D: ");
	scanf("%d", &numberD);
	
	if (!(numberB > numberC && numberD > numberA)) {
	   printf("Valores não aceitos!");
	   return 0;
	}
	
	if (!((numberC + numberD) > (numberA + numberB))) {
	   printf("Valores não aceitos!");
	   return 0; 
	}
	
	if (!(numberC >= 0)) {
	   printf("Valores não aceitos!");
	   return 0; 
	}
	
	if (!(numberD >= 0)) {
	   printf("Valores não aceitos!");
	   return 0; 
	}
	
	if (!(numberA % 2 == 0)) {
	   printf("Valores não aceitos!");
	   return 0;
	}
	
	printf("Valores aceitos!");
	return 1;
}
