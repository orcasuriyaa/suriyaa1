/* Program Using Nested for Loops 
   SuriyaaKumar G M, Aug27 2014 */

#include <stdio.h>

int main (void)
{
	int n;
	int number;
	int triangularNumber; 
	int counter;

	for ( counter = 1; counter <= 5; ++counter ) 
	{
	printf ("What triangular number do you want? ");
	scanf ("%i", &number);

	triangularNumber = 0;
	
	for ( n = 1; n <= number; ++n )
	
	triangularNumber += n;
	
	printf ("Triangular number %i is %i\n\n", number, triangularNumber);
	}

	return 0;
}

