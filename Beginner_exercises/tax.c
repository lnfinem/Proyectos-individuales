// Calculate taxes of 5% from a money's amount

#include <stdio.h>

int main()
{
	float amount, tax_added;
		printf("Enter an amount: ");
		scanf("%f", &amount);
		tax_added = (amount * 0.05f) + amount;
		printf("With tax added: %.2f\n", tax_added);
	return 0;
}

