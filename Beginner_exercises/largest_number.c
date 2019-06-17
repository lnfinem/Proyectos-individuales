// Find the largest in a series of numbers entered by the user

#include <stdio.h>

int main(void)
{
	float number = 0, mayor = 0 ;
	do {
		printf("Enter a number: ");
		scanf("%f", &number);
			if (number > mayor)
				mayor = number;
	}	while (number > 0);
			printf("The largest number entered was %.2f\n", mayor);
return 0;
}
