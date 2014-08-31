/* Revising Program to evaluate simple expressions of the form number operator number
   SuriyaaKumar G M, Aug31 2014 */

#include<stdio.h>

int main(void)
{
	float value1, value2;
	char operator;
	clrscr();
	printf("Enter the Expression :\n");
	scanf("%f %c %f", &value1, &operator, &value2);

	if( operator == '+')
	printf("The Sum is %2f:", value1 + value2);

	else if( operator == '-')
	printf(" The difference is %2f:", value1 - value2);

	else if( operator == '*')
	printf(" The Product is %2f:", value1 * value2);

	else if(operator == '/')
	if ( value2 == 0 )
	printf ("Division by zero.\n");
	
	else
	printf ("%2f\n", value1 / value2);
	
	else
	printf ("Unknown operator.\n");

	getch();

}