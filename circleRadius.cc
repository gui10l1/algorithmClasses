#include <stdio.h>
#include <math.h>

#define PI 3.14159;

int main() {
   double elevatedNumber = 2;
   double area, radius;
   
   printf("Insira o raio do círculo: ");
   scanf("%lf", &radius);
   
   area = (pow(radius, elevatedNumber)) * PI;
   
   printf("%.4lf", area);
}
