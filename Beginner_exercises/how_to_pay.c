// Enter a U.S dollar amount and shows how to pay that amount using the smallest number of bills

#include <stdio.h>

int main(void)
{
	int dollar_amount, twenty_bills, ten_bills, five_bills, one_bills ;
		printf("Enter a dollar amount: ");
		scanf("%d", &dollar_amount);
		twenty_bills = ( dollar_amount / 20 );
		ten_bills = ( dollar_amount - ( 20 * twenty_bills ) ) / 10;
		five_bills =  ( dollar_amount - ( 10 * ten_bills) - ( 20 * twenty_bills ) ) / 5;
		one_bills = ( dollar_amount - ( 5 * five_bills ) - ( 10 * ten_bills ) - ( 20 * twenty_bills ) ) / 1;
		printf("$20 bills: %d \n $10 bills: %d \n $5 bills: %d \n $1 bills: %d \n", twenty_bills, ten_bills, five_bills, one_bills);
	return 0;
}
