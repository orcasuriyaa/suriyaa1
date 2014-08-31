/* Revised Program to find Whether no is odd or even
   SuriyaaKumar G M, Aug30 2014 */

#include <stdio.h>

int main(void)
{
	int number_to_test;
	int remainder;

	printf("Enter the the number to test :\n");
	scanf("%d", &number_to_test);

	remainder = number_to_test % 2;

	if(remainder == 0)
	
	printf("The number is even");

	else 
	
	printf("The number is odd");
	

	return 0;
}


