/* Program to calculate the 200th triangular number using for statement
   SuriyaaKumar G M, Aug25 2014 */

#include <stdio.h>

int main (void)
{
	int n; 
	int triangularNumber;
	
	triangularNumber = 0;

	for ( n = 1; n <= 200; n = n + 1 )
	
	triangularNumber = triangularNumber + n;
	
	printf ("The 200th triangular number is %i\n", triangularNumber);

	return 0;
}

