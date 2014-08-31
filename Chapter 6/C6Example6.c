/*  Program to implement Sign Function
    SuriyaaKumar G M, Aug30 2014 */

#include <stdio.h>

int main(void)
{
	int number;
	int sign;

	printf("Enter the number:\n");
	scanf("%d", &number);

	if(number < 0)
	sign = -1;
	else if(number == 0)
	sign = 0;
	else
	sign = +1;

	printf(" The Sign is %i\n", sign);

	return 0;

}