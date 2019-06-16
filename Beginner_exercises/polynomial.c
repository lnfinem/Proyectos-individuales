// Calculate with a valor of x the following polynomial: 3x^5+2x^4-5x^3-x^2+7x-6 with the Horner's Rule

#include <stdio.h>

int main(void)
{
	float x, polynomial;
		printf("Enter value of x: ");
		scanf("%f", &x);
		polynomial = ( ( ( ( 3 * x + 2 ) * x - 5 ) * x - 1 ) * x + 7 ) * x - 6 ;
		printf("El valor del polinomio es %.2f \n", polynomial);
	return 0;
}
