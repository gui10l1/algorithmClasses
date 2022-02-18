#include <stdio.h>

int main() {
	bool running = true;
	
	while (running) {
		int age;
	
		printf("Insira uma idade de 0 - 150 anos: ");
		scanf("%d", &age);
		
		if (age >= 0 && age < 10) {
			printf("Criança!\n");
		} else if (age >= 10 && age < 18) {
			printf("Adolescente!\n");
		} else if (age >= 18 && age < 60) {
			printf("Adulto!\n");
		} else if (age >= 60 && age < 100) {
			printf("Idoso!\n");
		} else if (age >= 100 && age < 150) {
			printf("Zumbi!\n");
		} else {
			printf("Idade inválida!\n");
		}
		
		if (age == -1) {
			running = false;
		}
	}
}
