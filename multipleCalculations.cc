#include <stdio.h>

int main() {
   bool running = true;
   
	while (running) {
	    int option;
   	double valueX, valueY;
   	
   	printf("[1] Para somar\n");
   	printf("[2] Para subtrair\n");
   	printf("[3] Para dividir\n");
   	printf("[4] Para multiplicar\n");
   	printf("[5] Para finalizar o programa\n");
   	scanf("%d", &option);
   
       if (option != 1 && option != 2 && option != 3 && option != 4 && option != 5) {
           printf("Inválido!");
           return 0;
       }
       
       if (option != 5) {
           printf("Insira um número para X: ");
           scanf("%lf", &valueX);
       
           printf("Insira um número para Y: ");
           scanf("%lf", &valueY);
       }
       
       switch (option) {
           case 1:
               printf("Calculando %.1lf + %.1lf...\n", valueX, valueY);
               printf("O resultado foi: %.1lf\n", valueX + valueY);
               break;
               
           case 2:
               printf("Calculando %.1lf - %.1lf...\n", valueX, valueY);
               printf("O resultado foi: %.1lf\n", valueX - valueY);
               break;
               
           case 3:
               printf("Calculando %.1lf / %.1lf...\n", valueX, valueY);
               printf("O resultado foi: %.1lf\n", valueX / valueY);
               break;
               
           case 4:
               printf("Calculando %.1lf * %.1lf...\n", valueX, valueY);
               printf("O resultado foi: %.1lf\n", valueX * valueY);
               break;
               
           default:
               printf("Finalizando o programa...");
               running = false;
               break;
       }
	}
}
