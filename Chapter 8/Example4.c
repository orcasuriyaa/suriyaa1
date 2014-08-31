/* Function to calculate the nth triangular number
   SuriyaaKumar G M, Aug31 2014 */

#include <stdio.h>

void calculateTriangularNumber (int n)
{
	int i;
 	int triangularNumber = 0;

	for ( i = 1; i <= n; ++i )
	triangularNumber += i;
	printf ("Triangular number %i is %i\n", n, triangularNumber);
}

int main(void)
{
	calculateTriangularNumber (10);
	calculateTriangularNumber (20);
	calculateTriangularNumber (50);

	return 0;
}

