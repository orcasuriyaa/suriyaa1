/* Program Asking User for Input
   SuriyaaKumar G M, Aug27 2014 */

#include <stdio.h>

int main (void)
{
	int n;
	int number;
 	int triangularNumber;

	printf ("What triangular number do you want? ");
	scanf ("%i", &number);

	triangularNumber = 0;
	for ( n = 1; n <= number; ++n )
	triangularNumber += n;
	
	printf ("Triangular number %i is %i\n", number, triangularNumber);
	
	return 0;
}


