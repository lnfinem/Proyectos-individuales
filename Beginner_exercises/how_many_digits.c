// Calculates how many digits a number contais

#include <stdio.h>

int main(void)
{
	int number; 
		printf("Enter a number: ");
		scanf("%d", &number);
			if (number >= 0 && number < 10)
				printf("The number %d has one digit\n", number);
			else if (number > 9 && number < 100)
				printf("The number %d has two digits\n", number);
			else if (number > 99 && number < 1000)
				printf("The number %d has three digits\n", number);
			else if (number > 999 && number < 10000)
				printf("The number %d has four digits\n", number);
	return 0;
}
