#include <stdio.h>

int main() {
	float valueX, valueY;
	
	printf("Insira o valor de x: ");
	scanf("%f", &valueX);
	
	printf("Insira o valor de y: ");
	scanf("%f", &valueY);
	
	printf("%.1f é resultado da soma entre x e y!", valueX + valueY);
}
