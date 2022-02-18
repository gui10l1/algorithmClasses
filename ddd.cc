#include <stdio.h>

int main() {
	int codeNumber;
	
	printf("Insira o código de DDD: ");
	scanf("%d", &codeNumber);
	
	switch (codeNumber) {
		case 61:
			printf("Brasília\n");
			break;
			
		case 71:
			printf("Salvador\n");
			break;
			
		case 11:
			printf("Sao Paulo\n");
			break;
			
		case 21:
			printf("Rio de Janeiro\n");
			break;
			
		case 19:
			printf("Juiz de Fora\n");
			break;
			
		case 32:
			printf("Campinas\n");
			break;
			
		case 27:
			printf("Vitoria\n");
			break;
			
		case 31:
			printf("Belo Horizonte\n");
			break;
		
		default:
			printf("Não cadastrado!\n");
			break;
	}
	
	return 0;
}	

