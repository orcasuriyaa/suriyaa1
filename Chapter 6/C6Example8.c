/* Program to evaluate simple expressions of the form number operator number
   SuriyaaKumar G M, Aug31 2014 */

#include <stdio.h>

int main(void)
{
	float value1, value2;
	char operator;

	printf("Enter the Expression :\n");
	scanf("%f %c %f", &value1, &operator, &value2);

	if( operator == '+')
	printf("The Sum is %2f:", value1 + value2);

	else if( operator == '-')
	printf(" The difference is %2f:", value1 - value2);

	else if( operator == '*')
	printf(" The Product is %2f:", value1 * value2);

	else if(operator == '/')
	printf(" The quotient is %2f:", value1 / value2);

	return 0;

}